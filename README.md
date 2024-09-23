# C++ Module 01 - Memory Allocation, Pointers to Members, References, Switch Statement

## Introduction
This repository contains solutions for **C++ Module 01**, focusing on memory management, object-oriented programming, and basic C++ constructs. Each exercise builds upon the previous, progressively introducing new concepts and challenges.

## Project Structure
The project consists of the following exercises:
- ex00: BraiiiiiiinnnzzzZ
- ex01: Moar brainz!
- ex02: HI THIS IS BRAIN
- ex03: Unnecessary Violence
- ex04: Sed is for losers
- ex05: Harl 2.0
- ex06: Harl Filter

Each exercise is implemented in a separate directory, with its own Makefile for compilation.

---

### Exercise 00: BraiiiiiiinnnzzzZ
- **Files**: `Zombie.hpp`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`, `main.cpp`
- **Description**: This exercise implements a `Zombie` class that contains a name and an `announce()` method. Zombies announce themselves with a message like `Foo: BraiiiiiiinnnzzzZ...`. 
    - `newZombie()` creates a zombie on the heap.
    - `randomChump()` creates a zombie on the stack.
    - The destructor for `Zombie` prints a message when a zombie is destroyed, ensuring proper memory management and destruction of dynamically allocated zombies.

---

### Exercise 01: Moar brainz!
- **Files**: `Zombie.hpp`, `Zombie.cpp`, `zombieHorde.cpp`, `main.cpp`
- **Description**: This exercise expands on the previous one by creating a horde of zombies. The `zombieHorde(int N, std::string name)` function dynamically allocates an array of `N` zombies, each initialized with the same base name.
    - Each zombie in the horde announces itself using the `announce()` method.
    - The program ensures proper memory cleanup after the horde is no longer needed, preventing memory leaks.
    - **Optional Input**: 
        - If the program is run without arguments (e.g., `./ManyBraiiiiiiinnnzzzZ`), it defaults to creating a horde of 13 zombies, all named "Boo", numbered sequentially.
        - If the program is run with a number and a name as arguments (e.g., `./ManyBraiiiiiiinnnzzzZ 7 Fred`), it creates a horde of the specified number of zombies, each named according to the given name.

---

### Exercise 02: HI THIS IS BRAIN
- **Files**: `main.cpp`
- **Description**: This exercise introduces the difference between pointers and references in C++. It involves:
    - A string initialized to "HI THIS IS BRAIN".
    - A pointer (`stringPTR`) and a reference (`stringREF`) to the string.
    - The program prints the memory addresses and values of the original string, the pointer, and the reference. This exercise demystifies references and demonstrates how they work similarly to pointers, but with subtle differences.

---

### Exercise 03: Unnecessary Violence
- **Files**: `Weapon.hpp`, `Weapon.cpp`, `HumanA.hpp`, `HumanA.cpp`, `HumanB.hpp`, `HumanB.cpp`, `main.cpp`
- **Description**: This exercise introduces the `Weapon` class and two human classes (`HumanA` and `HumanB`).
    - `HumanA` always has a weapon passed through its constructor.
    - `HumanB` may or may not have a weapon and sets the weapon later.
    - Both classes have an `attack()` method that prints a message about the weapon they are attacking with. The implementation illustrates how references and pointers can be used to manage object dependencies.

---

### Exercise 04: Sed is for losers
- **Files**: `main.cpp`, `FileReplace.cpp`, `FileReplace.hpp`
- **Description**: This program takes a file, reads its content, and creates a new file with every occurrence of string `s1` replaced by string `s2`. 
    - The replacement is done using standard string operations (without `std::string::replace`).
    - The program handles errors such as file read failures and checks for invalid inputs, ensuring robustness in file manipulation.

---

### Exercise 05: Harl 2.0
- **Files**: `Harl.hpp`, `Harl.cpp`, `main.cpp`
- **Description**: The `Harl` class complains at four different levels: DEBUG, INFO, WARNING, and ERROR.
    - The `complain()` method dynamically calls the appropriate private member function using pointers to member functions, avoiding the use of `if/else` statements.
    - The implementation demonstrates the power of function pointers for clean and scalable code in situations where different behaviors need to be triggered based on input.

---

### Exercise 06: Harl Filter
- **Files**: `Harl.hpp`, `Harl.cpp`, `main.cpp`
- **Description**: This program filters Harl's complaints based on the log level passed as a command-line argument. It prints complaints from the specified level and all higher-priority levels (e.g., if you pass "WARNING", it prints both WARNING and ERROR messages).
    - The `switch` statement is used to manage the filtering logic.
    - This exercise builds on the previous one, adding filtering functionality while continuing to use pointers to member functions.

---

## Compilation
Each exercise contains a Makefile. To compile an exercise, navigate to its directory and run:
```bash
make
```
This will generate an executable that you can run to test the corresponding functionality.

Usage
ex00 - ex03: Run the generated executable to observe how the program behaves.
ex04: Provide a filename and two strings as command-line arguments for string replacement.
ex05 & ex06: Run the executable to see how Harl complains and filter the complaints using log levels.
Example command to run Exercise 04:

bash
./replace filename.txt string1 string2

Example command to run Exercise 01:

bash
./ManyBraiiiiiiinnnzzzZ 7 Fred
This would create 7 zombies named Fred.

If no arguments are provided:

bash
./ManyBraiiiiiiinnnzzzZ
This would create 13 zombies named Boo.

Conclusion
This module provides a comprehensive understanding of memory management, references, pointers, and basic control structures in C++. The exercises emphasize clean code, proper resource management, and adherence to C++98 standards.
