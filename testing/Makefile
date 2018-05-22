# Makefile for user.c

CFLAGS=-g -Wall
OBJS=user.o
CC=gcc

.PHONY: all clean

all: user

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS} ${LIBS}

clean:
	rm -f user ${OBJS}
