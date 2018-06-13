CC = gcc

CFLAGS = -Wall


SRC_FILES := $(wildcard *.c) $(wildcard *.h)



main: $(SRC_FILES)
	gcc $(SRC_FILES)


