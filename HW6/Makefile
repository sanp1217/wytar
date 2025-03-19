#Makefile
#Author: Pablo Sanchez
#Date: March 19, 2025

# COSC 3750, Homework 6

# A makefile that generates the executable for 
# wytar. Clean will remove the executable.

CC = gcc
CFLAGS = -Wall -ggdb

.PHONY: clean

wytar: wytar.c
	${CC} ${CFLAGS} wytar.c -o wytar

clean:
	/bin/rm -f wytar core.*