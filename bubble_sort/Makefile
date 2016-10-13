BINNAME=bubble_sort
CC=gcc
CFLAGS = -g -Wall -O2
C_SOURCE = $(wildcard *.c)
C_OBJS = $(patsubst %.c, %.o, $(C_SOURCE))

all:$(C_OBJS)
	$(CC) $^ -o $(BINNAME)

%.o:%.c
	$(CC) -c $(CFLAGS) $^ -o $@

.PHONY:clean

clean:
	rm -rf *.o $(BINNAME)

