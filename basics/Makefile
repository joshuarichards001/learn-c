# Define the compiler
CC = gcc

# Define compiler flags
CFLAGS = -Iinclude -Wall -Wextra -Werror

# Define directories
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Define the target executable
TARGET = $(BINDIR)/myprogram

# Find all .c files in the source directory
SOURCES = $(wildcard $(SRCDIR)/*.c)

# Generate .o files from the source files
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Rule to create the directories if they don't exist
$(shell mkdir -p $(OBJDIR) $(BINDIR))

# Default target to build the executable
all: $(TARGET)

# Rule to link the object files to create the executable
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

# Rule to compile .c files to .o files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up the build files
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)
