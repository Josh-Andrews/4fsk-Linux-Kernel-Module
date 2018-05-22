ECE 331 S18 Kernel Driver Project.

Written by Josh Andrews using framework code provided by Prof. Sheaff.

4/17/18


The testing folder contains a user program to test the functionality of the four-fsk driver.
It tests open flags, correct encoding (if tested against dictionary), and if blocking works.
When testing RDONLY or RDWR flags, a message is printed on error but program keeps running.
One of the WRONLY opens, either with NONBLOCK or without, must be commented out to test either one.

The main repository contains the four-fsk.c kernel driver code and associated compiled modules/files.

open function:
It only makes sense to write to this device so we check the user suppliued flags to open and return an error if opened incorrectly.

release function:
At this level there is nothing to do. A print is used to make sure it was call.

ioctl function:
Was not used.

write function:
This is where all the magic happens.  A mutex is used for locking to prevent simultaneous writes/corrupted data.  Then the user's supplied buffer to write is copied to the kernel.  Enable is brought high and then the encoding/led toggling is performed via the encode function documented below.  After that enable is brought low and after a short delay the lock is released and the buffer freed.
If NONBLOCING specified and device is already locked (in use) an error is returned.  Otherwise process waits until device free then writes.


encode function:
Taken primarily from HW5 and HW6, the encode function 4b5b encodes the buffer into a new buffer.  A nested for loop then itterates through each bit pair, starting with data[0] bit 7&6 which get mapped to gpio bit1 and bit0 respectfully, to toggle the 2 leds.  The clock gpio is also controlled in this loop to set the values on the falling edge.

four-fsk.c and user.c may provide more clarification if questions still exist after reading the above documentation.

The expansion board firware update was not performed prior to completetion of this project.  As such the 2 second sleep after enable is set low remains in the code.


four-fsk.pdf was printed using enscript.