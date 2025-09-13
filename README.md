# CPP-03

This project demonstrates object-oriented programming concepts in C++ through a series of exercises involving different types of Trap classes. Each exercise builds upon the previous, introducing inheritance, encapsulation, and polymorphism.

## Project Structure

- **ex00**: Basic implementation of the `ClapTrap` class.
- **ex01**: Adds the `ScavTrap` class, demonstrating inheritance from `ClapTrap`.
- **ex02**: Introduces the `FragTrap` class, further extending the hierarchy.
- **ex03**: Adds the `DiamondTrap` class, showcasing multiple inheritance and the diamond problem.

Each folder contains:
- Source files (`.cpp` and `.hpp`)
- A `main.cpp` for testing
- A `Makefile` for building the project

## How to Build and Run

Navigate to the desired exercise folder and run:

```bash
make
./main
```

## Classes Overview

- **ClapTrap**: Base class with basic attack and defense functionality.
- **ScavTrap**: Inherits from `ClapTrap`, adds gate-keeping abilities.
- **FragTrap**: Inherits from `ClapTrap`, adds special attack features.
- **DiamondTrap**: Inherits from both `ScavTrap` and `FragTrap`, demonstrates multiple inheritance.

## Learning Objectives
- Understand C++ class design
- Practice inheritance and polymorphism
- Explore constructors, destructors, and method overriding
- Handle multiple inheritance and the diamond problem

## Author
Jeferson Sopan R

---
Feel free to explore each exercise and modify the code to deepen your understanding of C++ OOP principles.
