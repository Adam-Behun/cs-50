# Memory and Pointers

> Pointer is a variable that stores the memory address (RAM) of another variable. Pointers are used to indirectly access and manipulate the value of the pointed-to variable.

It is useful:
- Allowing functions to modify variables passed to them as arguments
-   Creating dynamic data structures, such as linked lists and trees
-   Improving the efficiency of certain algorithms by avoiding the need to copy large amounts of data
-   Iterating through the elements of an array using a pointer, instead of using an index variable
-   Implementing dynamic data structures, such as linked lists and trees
-   Performing operations on blocks of memory, such as copying, filling, and comparing

## Terminology for pointers

1.  Pointer: A pointer is a variable that stores the memory address of another variable. It allows us to indirectly access and manipulate the value of the pointed-to variable.
    
2.  Dereferencing: Dereferencing a pointer means accessing the value stored at the memory address pointed to by the pointer. In C, this is done using the `*` operator. For example, if `ptr` is a pointer to an `int`, then `*ptr` retrieves the value of the `int` pointed to by `ptr`.
    
3.  Address-of operator: The `&` operator is used to get the memory address of a variable. For example, `&x` retrieves the memory address of the variable `x`.
    
4.  Pointer arithmetic: Pointer arithmetic is the ability to perform arithmetic operations (such as addition and subtraction) on pointers. It is based on the idea that a pointer to a data type can be treated as an array of elements of that type.
    
5.  Indirection: Indirection refers to the process of accessing a value through a pointer, rather than directly accessing the value. For example, if `ptr` is a pointer to an `int`, then `*ptr` is an example of indirection, as it accesses the value of the `int` pointed to by `ptr`.

## Dynamic memory allocation

Allocate memory at run-time. 

`malloc()`
`free()`

## Memory problems

1.  Stack overflow: A stack overflow occurs when a program tries to push more data onto the call stack than the stack can hold. The call stack is a region of memory that stores the function calls and local variables of a program, and it has a fixed size. If a program tries to push more data onto the stack than it can hold, it can cause a stack overflow, which can lead to a crash or other unpredictable behavior. Stack overflows are often caused by infinite recursion or by allocating too much data on the stack.
    
2.  Heap overflow: A heap overflow occurs when a program tries to allocate more memory from the heap (a region of memory used for dynamic memory allocation) than the heap can hold. This can happen when a program continuously allocates memory without freeing it, eventually using up all available heap space. Heap overflows can lead to a crash or other unpredictable behavior.
    
3.  Dangling pointers: A dangling pointer is a pointer that points to memory that has been freed or deallocated. Dangling pointers can cause problems if the program tries to access or modify the memory pointed to by the pointer, as this memory is no longer valid.
    
4.  Memory leaks: A memory leak occurs when a program allocates memory dynamically but fails to free it when it's no longer needed. This can lead to a depletion of available memory over time, as the program continues to allocate more and more memory without freeing it. Memory leaks can eventually cause a program to crash or run out of memory