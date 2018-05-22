/* user.c
 *
 * Test program for the 4fsk kernel driver
 *
 * Tests correct flags on open call
 * Tests for correct encoding
 * Tests blocking using multiple processes 
 *
 * Josh Andrews
 * ECE-331
 * 4/17/18
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    int fd, length, err;
    char *msg;
    pid_t child;

    // Only accept one arguement
    if (argc != 2) {
        printf("Usage: %s <message>\n", argv[0]);
        return -1;
    }

    // copy message and get length
    msg = argv[1];
    length = strlen(msg);

    // Test RDONLY flag, should fail so say so and move on to more testing
    fd = open("dev/four_fsk", O_RDONLY);
    if (fd < 0) {
        printf("O_RDONLY did not work\n");
    }
    
    // Test RDWR flag, should fail so print it and continue testing
    fd = open("dev/four_fsk", O_RDWR);
    if (fd < 0) {
        printf("O_RDWR did not work\n");
    }
    
    // Use the NONBLOCK open to test correct operation
    // Use O_WRONLY open to test correct blocking

    fd = open("/dev/four_fsk", O_WRONLY | O_NONBLOCK);
    //fd = open("/dev/four_fsk", O_WRONLY);
    if (fd < 0) {
        printf("Could not open device!\n");
        return -2;
    }
    
    // Write the message to the device
    err = write(fd, msg, length);
    if (err < 0) {
        printf("Could not write to device!\n");
        close(fd);
        return -3;
    }

    // Create parent-child pair of processes to test blocking
    child = fork();

    // Write with parent process
    if (child > 0) {
        err = write(fd, msg, length);
        if (err < 0) {
            printf("Parent process could not write\n");
            close(fd);
            return -4;
        }
    }
    // Write with child process
    else if (child == 0) {
        err = write(fd, msg, length);
        if (err < 0) {
            printf("Child process could not write\n");
            close(fd);
            return -4;
        }
    }
    // fork failed
    else {
        printf("Could not generate processes\n");
        close(fd);
        return -5;
    }

    //close device and return
    close(fd);
    return 0;
}
