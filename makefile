# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

main: main.o parse.o
		$(CC) $(CFLAGS) -o main main.o parse.o

main.o: main.cpp parse.h
		$(CC) $(CFLAGS) -c main.cpp

parse.o: parse.cpp parse.h
		$(CC) $(CFLAGS) -c parse.cpp
