# Makefile for building a simple C program

# Compiler to use
CC = gcc

# Compiler flags (add -g for debugging info if needed)
CFLAGS = -Wall -IHeaders  # Add -IHeaders to specify the directory for header files

# Source files (all .c files in the sources directory)
SRCS = $(sources/*.c)

OBJS = $(sources/*.o)

# Output binary name
#TARGET = main

# Build rule
#all: $(TARGET)

TARGET = myTarget$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ):$(SRC)
# Clean rule to delete build output
clean:
	del $(TARGET) 2>nul || true


# SRC = mod1.c mo5.c mod6.c main.c 

# OBJ = mod1.o mod5.o mod6.o main.o 

#PROG = myProgram$(PROG):$(OBJ)
#	gcc $(OBJ) -o $(PROG)

#$(OBJ):$(SRC)