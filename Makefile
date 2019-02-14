CC = g++
CFLAGS = -g -O0 -Wall -std=c++11 -pthread
LDFLAGS = -pthread

OBJS = cbinary.o \
       usec.o \
       main.o

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

clean:
	rm -rf $(OBJS)
	rm -rf main
