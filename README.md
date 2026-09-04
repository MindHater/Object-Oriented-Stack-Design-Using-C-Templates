# Object-Oriented Stack Implementation Using C++ Templates

A simple menu-driven **Stack Application** developed in **C++** using **Class Templates**. The project demonstrates how a single generic stack implementation can be used with different data types such as integers, characters, floating-point numbers, doubles, and strings.

---

## Features

* Stack implementation using Class Templates
* Menu-driven program
* Supports multiple data types:

  * Integer
  * Character
  * Float
  * Double
  * String
* Push operation
* Pop operation
* Display stack elements
* Stack Overflow handling
* Stack Underflow handling
* Empty stack detection
* Simple console-based interface

---

## Technologies Used

* C++
* Object-Oriented Programming
* Class Templates
* Generic Programming
* Stack Data Structure
* GNU g++
* Linux / Ubuntu

---

## Concepts Covered

* Classes and Objects
* Class Templates
* Constructors
* Generic Programming
* Stack Data Structure
* Push and Pop Operations
* Array-based Stack
* Menu-Driven Programming
* Overflow and Underflow Conditions
* Function Design

---

## Project Structure

```text
Stack-Using-Cpp-Templates/
│
├── README.md
└── stack.cpp
```

---

## Learning Objectives

The main purpose of this project is to understand how templates can be used to create reusable data structures.

Through this project, the following concepts are practiced:

* Creating a generic Stack class
* Using templates with different data types
* Implementing Push and Pop operations
* Checking Stack Overflow and Underflow
* Displaying stack elements
* Working with constructors
* Designing a menu-driven application

---

## Stack Operations

### Push

Adds a new element to the top of the stack.

If the stack is already full, the program displays:

```text
Stack Overflow
```

### Pop

Removes the element from the top of the stack.

If there are no elements in the stack, the program displays:

```text
Stack Underflow
```

### Display

Displays all elements currently present in the stack, starting from the top element.

---

## How to Compile

Use the following command:

```bash
g++ stack.cpp -o stack
```

---

## How to Run

```bash
./stack
```

---

## Example

```text
STACK USING TEMPLATE

1. Integer Stack
2. Character Stack
3. Float Stack
4. Double Stack
5. String Stack
6. Exit

Enter choice: 1

1. Push
2. Pop
3. Display
4. Back to Main Menu

Enter choice: 1
Enter value: 25

Value pushed into stack.
```

---

## Author

**Meet Kanasagara**
