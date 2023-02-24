# Arrays

> An array is a linear data structure that stores data of the same data type in a sequential order in memory. Arrays are indexed and their size is fixed (specified at the beginning). This concept is the same for all programming languages. 

# Compiling

All code needs to be translated into binary language in order to be executed - changed into an executable.

-   Make is running a program called clang used by C language
    -   -o specifies the output of my program
    -   -v link in someone else's libary

To compile my C program --> clang is the compiler "make" is equal to `clang -o hello hello.c -lcs50`

Compile (go from "program-name.c" into binary code) means doing 4 steps:

1.  Preprocessing: Compiler goes into my code, sees #include, finds this file in the hardrive, copies and pastes the contents to the top of my program. It now understands the functions existing in the outside library (file).

    #include <stdio.h> --- (for printf) #include <cs50.h> --- (for get_string)
   
2. Compiling: Assembly language - a step between source code and binary code. This gets pushed inside the CPU of my computer.
3.  Assembling: Assembly code is turned into binary language.  
4.  Linking: Using different people's code.

# Debugging

Ways to debug - fix the code so that it does what I want

printf, debugger, rubber duck, valgrind

-   print between the steps to see where the problem is
-   run debug50 - go through the program step by step - human pace
    -   command - debug50 ./buggy
    -   set a break point (pause execution)
-   talk through the problem - thinking process

# Data types
> Classification of data that determines the possible values for that type, the operations that can be performed on it, and the way it is stored in computer memory
#### Common datatypes:
* Primitive
	* Numeric - integers, floating point numbers, complex numbers
	* Boolean - true or false
	* Character - letters, numbers, symbols 
	* Null - represent absence of a value
* Complex or composite data types
	* Arrays - store data of the same data type in a sequential order, fix sized
	* Lists - more data types, flexible size
	* Sets - unique elements, do not preserve order
	* Tuples - immutable
	* Dictionaries - key-value pairs, fast to retrieve

# Character encoding standards
* Define mapping between characters and their numerical values. They allow the correct transmission and display of characters across devices.
#### Most used character encoding standards
- ASCII - American standard
- Unicode - larger than ASCII, all languages, more storage required
- UTF-8 - efficient and large, widely used over the internet
- ISO 8859 - additional characters from other languages from Europe
- GB 18030 - Assian characters

# Memory
> Physical devices which store data that can be accessed by the CPU. There is primary (directly accessible by CPU) and secondary memory (storage for later use).
> * Primary memory - RAM and cache is empty when power is off and are used to store data for immediate use. It is fast because the CPU can randomly access any location in that space.
> * Secondary memory refers to HDD, SSD, USB, Optical drives, Cloud storage (RAM, HDD or SSD) which allows us to store large amounts of data - practically unlimited amounts of data. HDD is cheaper but slower, SSD more expensive but faster

