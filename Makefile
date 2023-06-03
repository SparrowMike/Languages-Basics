# Variables
CC = g++                      # The compiler we are using
CFLAGS = -std=c++17 -Wall -I./include # Compiler flags: C++ version, to show all warnings, and the include path
SRC = $(wildcard src/*.cpp)   # SRC is a list of all .cpp files in the src directory
OBJ = $(patsubst src/%.cpp, obj/%.o, $(SRC)) # OBJ is a list of all object files corresponding to .cpp files in SRC
PROG = main                   # The name of the final executable

# Default make
all: dir $(PROG)              # By default (when typing "make" with no arguments), make the directories if they don't exist, then build the executable

# Make directories
dir:
	mkdir -p obj               # Create the obj directory if it doesn't exist

# Link
$(PROG): obj/main.o $(OBJ)    # The final executable depends on all object files
	$(CC) obj/main.o $(OBJ) -o $(PROG) # Link all object files together to create the executable

# Compile main
obj/main.o: main.cpp          # main.o depends on main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o obj/main.o # Compile main.cpp to create main.o

# Compile source files
obj/%.o: src/%.cpp            # Each object file in obj/ depends on the corresponding source file in src/
	$(CC) $(CFLAGS) -c $< -o $@ # Compile each source file to create the corresponding object file

# Remove object files and executable
clean:
	rm -rf obj $(PROG)          # When "make clean" is run, remove all object files and the executable
