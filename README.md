# OOP-Lab-1
## C++ Program - Animal Hierarchy

## Overview

This C++ program showcases the implementation of a basic animal hierarchy using classes and inheritance. The code includes a base class `Animal` with attributes like name, age, species, and habitat. The program demonstrates the creation of derived classes, such as `Amphibian` and `Bird`, inheriting from the base class.

## Key Features

- **Animal Class:** Defines the fundamental attributes of an animal - name, age, species, and habitat.
- **Amphibian Class:** Extends the Animal class, representing amphibians with additional functionalities.
- **Bird Class:** Extends the Animal class, representing birds with specific attributes and methods.
- **Dynamic Memory Allocation:** Illustrates the use of `new`, `delete`, `malloc`, and `free` for memory management.
- **Polymorphism:** Features a function (`displayAnimal`) that takes pointers to the base class, showcasing polymorphic behavior.

## Usage

- The program demonstrates creating instances of different animal types, displaying their attributes, and managing memory.
- Key functionalities include creating amphibians, birds, and dynamically allocated animal objects.

## How to Run

1. Compile the program using a C++ compiler (e.g., g++).
2. Execute the compiled binary.

```bash
g++ animal_hierarchy.cpp -o animal_hierarchy
./animal_hierarchy

