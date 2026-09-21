# C++ Programming Language

A comprehensive collection of **C++ programming concepts, implementations, and examples**, progressing from core language fundamentals to advanced object-oriented programming, templates, STL, memory management, multithreading, and performance-oriented programming.

## Topics Covered

### 1. Object-Oriented Programming

* Procedural Programming vs Object-Oriented Programming
* Encapsulation
* Inheritance
* Polymorphism
* Method Overriding
* Virtual Functions
* Virtual Polymorphism
* Pure Virtual Functions
* Abstract Classes
* Virtual Inheritance
* Virtual Destructors
* Constructor Execution Sequence in Inheritance
* Destructor Execution Sequence in Inheritance
* `this` Pointer
* Namespaces

### 2. Functions and References

* Call by Reference
* Creating Aliases
* Function Parameters with Default Arguments
* Default Arguments
* Function Templates
* Functors / Callable Objects
* Lambda Expressions

### 3. Static Members

* Static Methods
* Static Properties / Data Members

### 4. Constructors and Object Lifetime

* Empty Constructor
* Default Constructor
* Parameterized Constructor
* Default-Argument Constructor
* Copy Constructor
* Move Constructor
* Copy Assignment Operator
* Move Assignment Operator
* Return Value Optimization (RVO)

### 5. Operator Overloading

* Insertion Operator `<<`
* Extraction Operator `>>`
* Arithmetic Operators
* Relational Operators
* Dereferencing Operator `*`
* Subscript Operator `[]`
* Increment / Decrement Operators
* Data Type Conversion / User-Defined Type Conversion

### 6. Friend Functions and Classes

* Friend Functions
* Friend Classes

### 7. Input / Output

* `cout`
* `cin`
* Monitor / Keyboard Classes
* Insertion Operator Overloading
* Extraction Operator Overloading

### 8. Dynamic Memory Management

* Dynamic Memory Allocation
* `new`
* `delete`
* Object Lifetime
* Manual Resource Management

### 9. Custom String and Container Implementations

#### TMString

A custom string class implementing concepts such as:

* Dynamic character storage
* Constructors
* Copy / Move semantics
* Assignment operators
* Operator overloading
* String operations

#### TMVector

A custom vector-like container implementing:

* Dynamic storage
* Element access
* `[]` operator
* Memory management
* Templates

#### TMList

A custom list implementation covering:

* Nodes
* Dynamic memory
* Insertion and deletion
* Traversal
* Iterators

### 10. Templates

* Function Templates
* Class Templates
* Generic Programming
* Template-Based Containers

### 11. Iterators

* Creating Custom Iterators
* Iterator Operations
* Container Traversal
* Relationship between Containers and Iterators

### 12. Standard Template Library (STL)

STL containers and their practical usage:

* `list`
* `stack`
* `queue`
* `map`
* `set`

Also covered:

* When to use which STL container
* Choosing appropriate STL containers in Online Assessment / Coding Rounds
* Time and space complexity considerations

### 13. File Handling

* File Input / Output
* Reading from Files
* Writing to Files
* File Streams

### 14. Smart Pointers

* `unique_ptr`
* `shared_ptr`
* `weak_ptr`
* Ownership
* Automatic Resource Management

### 15. Exception Handling

* Exceptions
* `try`
* `catch`
* `throw`
* Exception-safe resource management

### 16. Performance and Cache Optimization

Introduction to performance-oriented C++ programming:

* Cache Hit
* Cache Miss
* Cache-Friendly Data Access
* Code Optimization to Reduce Cache Misses
* Memory Access Patterns
* Performance-Aware Programming

### 17. Multithreading

* Creating Threads
* Multithreaded Programming
* Synchronizing Threads
* Communication Between Threads
* Thread Coordination
* Shared Data and Synchronization

---

## Learning Progression

The repository follows a progression from fundamental C++ concepts to more advanced systems-oriented programming:

```text
C++ Fundamentals
       ↓
Functions & References
       ↓
OOP
       ↓
Constructors & Object Lifetime
       ↓
Operator Overloading
       ↓
Dynamic Memory Management
       ↓
Templates
       ↓
Custom Containers
       ↓
Iterators
       ↓
STL
       ↓
Inheritance & Polymorphism
       ↓
Smart Pointers & Exceptions
       ↓
Lambdas
       ↓
Multithreading
       ↓
Synchronization & Communication
       ↓
Cache & Performance Optimization
```

## Key Focus

This repository focuses not only on learning C++ syntax, but also on understanding:

* How objects are created and destroyed
* How memory is allocated and released
* How copy and move semantics work
* How operator overloading works internally
* How templates enable generic programming
* How STL containers should be selected for different problems
* How inheritance and virtual dispatch work
* How resources can be managed using RAII and smart pointers
* How threads communicate and synchronize
* How memory access patterns affect cache performance

## Goal

The goal is to build a strong foundation in **modern C++ programming, object-oriented design, generic programming, STL, memory management, concurrency, and performance-aware programming** through practical implementations and experiments.

