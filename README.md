# C++ Playground

This project is a playground for experimenting with various features of the C++ programming language.

## Table of Contents

1. [Folder Structure](#folder-structure)
2. [Getting Started](#getting-started)
3. [Clean Up](#clean-up)
4. [Auto Building and Running](#auto-building-and-running)

## Folder Structure

The workspace is organized as follows:

- `src/`: This directory contains all the .cpp files except main.cpp.
- `include/`: This directory contains all the .h files corresponding to the .cpp files in the `src/` directory.
- `obj/`: This directory is used to store all the .o files generated during the build process.
- `main.cpp`: This is the file containing the main() function, located in the root directory.

## Getting Started

To build and run the project, use the following command in your terminal:

```bash
make && ./main
```

This command will compile all the .cpp files, link them together to build the `main` executable, and then run that executable.

## Clean Up

```bash
make clean
```

To clean up the project (remove all the .o files and the `main` executable), use the following command:


## Auto Building and Running

If you want to automatically rebuild and run your project whenever a file changes, you can use the `entr` tool. If `entr` is not already installed on your system, you can install it using a package manager. For example, on Ubuntu, you would use:

```bash
sudo apt-get install entr
```

Once `entr` is installed, you can use the following command to watch for file changes and automatically rebuild and run your project:

```bash
ls *.cpp src/*.cpp | entr -s 'make && ./main'
```

This command will watch all .cpp files in the root directory and in the `src/` directory, and whenever one of these files changes, it will run `make && ./main` to rebuild and run the project.
