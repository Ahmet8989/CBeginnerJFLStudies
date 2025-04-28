# Makefile for building a simple C program

# Compiler to use
CC = gcc

# Compiler flags (add -g for debugging info if needed)
CFLAGS = -Wall -IHeaders  # Add -IHeaders to specify the directory for header files

# Source files (all .c files in the sources directory)
SRCS = $(wildcard sources/*.c)

# Output binary name
TARGET = main.exe

# Build rule
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Clean rule to delete build output
clean:
	del $(TARGET) 2>nul || true