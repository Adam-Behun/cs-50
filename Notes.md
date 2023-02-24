# Harvard CS50 Course -- Fall 2022

https://cs50.harvard.edu/x/2022/

## Week 1 - Basics of command line and introduction to C

### Programs
  - hello0.c
  - hello1.c
  - calculator0.c
  - calculator1.c
  - calculator2.c
  - points0.c
  - points1.c
  - points2.c
  - parity.c
  - agree.c
  - meow0.c
  - meow1.c
  - meow2.c - function
  - meow3.c -- abstraction with parameterization
  - discount0.c
  - discount1.c
  - discount2.c
  - mario0.c
  - mario1.c
  - mario2.c
  - mario3.c
  - calculator3.c
  - calculator4.c
  - pennies.c



Terminal basic commands:

`
- cd
- cp
- ls
- mkdir
- mv
- rm
- rmdir
- cd .. --> step back
- . --> current directory
`

To create a file use
`
code "program name"
`

To run the program use (make sure you are in that directory with terminal)
`
make "program name"
./"program name"
`

Format codes for printing in C:
  - %c - char
  - %f - float
  - %i - int
  - %li - long int
  - %s - string

## Week 2 - Arrays

### Programs
  - buggy0.c
  - buggy1.c
  - scores0.c
  - scores1.c
  - scores2.c
  - scores3.c -- see scores3.c for the best version of the scores program
  - hi0.c -- think about chars and arrays
  - hi1.c
  - hi2.c - difference is how it is stored and accessed
  - hi3.c
  - hi4.c -- where is the end of the string in the memory
  - hi5.c
  - hi6.c -- array of strings
  - length0.c
  - length1.c -- count number of characters
  - length2.c
  - string0.c
  - string1.c
  - uppercase0.c
  - uppercase1.c
  - uppercase2.c
  - argv0.c
  - argv1.c
  - argv2.c
  - exit.c

All code needs to be translated into binary language in order to be executed - changed into an executable.

- Make is running a program called clang used by C language
  - -o specifies the output of my program
  - -v link in someone else's libary

To compile my C program --> clang is the compiler
"make" is equal to  `clang -o hello hello.c -lcs50`

### Compile (go from "program-name.c" into binary code) means doing 4 steps:

1. Preprocessing:
Compiler goes into my code, sees #include, finds this file in the hardrive, copies and pastes the contents to the top of my program. It now understands the functions existing in the outside library (file).

      #include <stdio.h> --- (for printf)
      #include <cs50.h> --- (for get_string)

2. Compiling:
Assembly language - a step between source code and binary code. This gets pushed inside the CPU of my computer.

3. Assembling:
Assembly code is turned into binary language.

4. Linking:
Using different people's code.


### Debugging (find mistakes in the program)
printf, debugger, rubber duck, valgrind

- print between the steps to see where the problem is
- run debug50 - go through the program step by step - human pace
  - command - debug50 ./buggy
  - set a break point (pause execution)
- talk through the problem - thinking process

### Data types

bool 1 byte
char - 1 byte
double - 8 bytes
float - 4 bytes
int - 4 bytes
long - 8 bytes
string - variable amount of space

### Memory

- RAM - 1GB stores 1 billion bytes
  - memory is like a canvas where you put in data that take out space

Array allows me to store multiple values of the same type contiguosly.

scores.c program;
`
int scores[3]; = int score 1
                 int score 2
                 int score 3
`

Use of an array is not to save space but to make it simpler and collapse into 1 variable distinguished by indexes. String is an array you can index into [0].

Write programs which take command line arguments.
`
  #include <stdio.h>
  int main(int argc, string argv[])
  {
    ...
  }
`


## Week 3 - Algorithms

### Programs:
  - numbers.c -- linear search for integers
  - names.c -- linear search for names
  - phonebook0.c
  - phonebook1.c -- Data Structure
  - iteration.c -- draw a pyramid
  - recursion.c -- draw a pyramid

input --> |_| --> output

Array of memory - index starts at 0 and computer needs to go one by one

|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_|
|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_|
|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_|
|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_|

### Searching

- Efficiency - running time of an algorithm
- Size of the problem and time to solve
- Basics:
  - Big O = upper bound
  - Big Omega = lower bound
  - Big Theta =  upper bound and the lower bound are the same

#### Linear search

`
for i from o to n-1
  if number behind doors[i]
    return true
  return false
`

##### Linear search running time

Big O = O(n) --> Big O of n
Big omega = Omega(1) --> constant number of steps - she gets the number immediately
Big Theta - not applicable as they are not equivalent

* What is the running time of this program. How many times the loop will need to execute?
* Big O notation for the upper bound - "the worst possible case"
* Big Omega for the lower bound - "the best possible case"


#### Binary search

`
if no doors
  return false
if number behind doors[middle]
  return true
else if number < doors[middle]
  search doors[o] through doors[middle - 1]
else if number > doors[middle]
  search doors[middle + 1] through doors[n - 1]
`


##### Binary search running time

Big O = O(log n) --> the worst possible case - upper bound for the time ran - max amount of time this is going to take
Big Omega = Omega(1) --> the best possible case

#### Data structures

* Define your own datatype, for example a person in the phonebook.c program.
* Encapsulation

`
typedef struct{
string name;
string number;
}
person;
`

#### Sorting numbers

Computer CPU usually does only thing at a time. How many cores you have - brains.
- Selection sort
- Buble sort
- Merge sort

##### Selection sort

`
for i 0 to n - 1
  find smallest number between numbers[i] and numbers[n-1]
  swap smallest number with numbers[i]
`

Problem is getting smaller and smaller.
Big O = n(n+1)/2 --> O(n^2)
Big Omega = n^2
Big Theta

##### Bubble sort

We might benefit from being lucky as it has a better Big Omega.

`
repeat n-1 times
  for i from 0 to n-2
    if numbers[i] and numbers[i+1] out of order
      swap them
  if no swaps
    quit
`

Big O = O(n^2)
Big Omega = n


##### Recursion
- Making sorting numbers fundamentally better
- Function calls itself

##### Merge sort
- Uses more memory but has a running time of O(log n)
- Best for unsorted data

`
if only one number
  quit
else
  sort left half of numbers
  sort right half of numbers
  merge sorted halves
`

## Week 4 - Memory


### Programs

Go over this to understand what is stored and printed: https://cs50.harvard.edu/x/2022/notes/4/#compare-and-copy

  - address0.c
  - address1.c
  - address2.c
  - address3.c
  - address4.c
  - address5.c
  - address6.c
  - address7.c
  - address8.c
  - address9.c
  - address10.c
  - address11.c
  - address12.c
  - compare0.c
  - compare1.c
  - compare2.c
  - compare3.c
  - compare4.c
  - copy0.c
  - copy1.c
  - copy2.c
  - copy3.c
  - memory.c
  - garbage.c
  - swap0.c
  - swap1.c -- use pointers to swap 2 values
  - scanf0.c
  - scanf1.c
  - phonebook.csv
  - phonebook.c
  - jpeg.c
  - helpers.c




* Rows and columns of data - a grid - an array

Combination of Red, Green, Blue gets us any shade in the world.
  - #000000
  - ff = 255 (hexadecimal to "decimal") --> Hexadecimal system for RGB.
  - 0x_____ - means hexadecimal number (0x)

RAM - memory bites use hexadecimal system for location

|_|_||_|_||_|_||_|_||_|_||_|_||_|_||_|_|
|_|_||_|_||_|_||_|_||_|_||_|_||_|_||_|_|
|_|_||_|_||_|_||_|_||_|_||_|_||_|_||_|_|

#### Pointers
Variables storing addresses

In C you can save the variable location (pointing to a pointer) and also look into the memory using pointers --> * operator.
- What's the location of this variable?
- What's in this location?
- pointers to pointers

* string is not defined in C - it is an array of characters
`
string s = "Hi!" == char *s = "Hi!"
`

##### Pointer Arithmetic

##### Dynamic Memory Allocation

malloc and free

The reasons why pc is slow is because malloc is asking for more memory but it never frees any memory and it runs out of it.

##### Swapping and the use of temporary variables

`
machine code
globals
heap
stack
`

stack overflow - using too much memory by using too many local functions


## Week 5 - Data Structures

### Programs
  - list0.c
  - list1.c
  - list2.c
  - list3.c
  - tree.c

Problems with arrays: running time for:
  - insert = O(n)
  - search = O(log n)

struct keyword lets me invent my own variable
  person has a name and height and this allows me to encapsulate both with one data structure

. operator to access a field inside the structure
* operator for pointers and deference operator

-> notation - go into a structure and a location

#### Linked Lists
I need to put something else to the array but there is no space right behind it so I put a pointer there (link) to the location where the space is.

`
typedef struct node
{
  int number;
  struct node *next;
}
node;
`

We initialize the linked list to start at a NULL value as we do not want to point to a garbage value and malloc gives us a space for that NULL somewhere and we point to it.

Adding 1 to the linked list

```
  Get space from malloc (sizeof(node))

  Go to the address in the structure called n and set its field called number to 1
  if (n != NULL)
  {
    (*n).number = 1;
  }

OR use -> instead of (*n).

  Go to n and change the field called number to 1
  if (n != NULL)
  {
    n->number = 1;
  }
```

* Order of operations matters when inserting into a list, get a temporary value pointing there and then, you're safe to switch. Not to orphan anything in the linked list you have to make sure that at all times you are pointing to the values and then when inserting, you first point to the new one and then switch.

Running time of searching and inserting into a linked list must be linear as computer only sees one thing at a time -> O(n) and OMEGA(n)

#### Trees

Have dynamic memory allocation but keep the array-like binary search even though, now in 2 dimensions.

##### Binary Trees

An ordered tree sorted in 2 dimesions - left-right, top-down is recursive.

##### Hash Tables

##### Tries

Tree that gives us constant time to look up values - arrays pointing to other arrays making trees.

Find and insert are constant.

##### Queues

FIFO (first in and first out) system
enqueue and dequeue
implement it using arrays or linked lists

##### Stacks

LIFO (last in and first out) property

array or linked lists - Gmail by default settings

push and pop

##### Dictionaries

Map keys to values.

Check out for face recognition, speech to text, and text to speech:

`
https://cs50.harvard.edu/x/2022/weeks/6/
`

## Week 6 - Python

docs.python.org

OOP - functions are embedded inside the datatype.

Python simplifies C syntax-wise and has the advantage of a huge amount of libraries - using other people's codes

### Programs
  - hello.py
  - dictionary.py
  - calculator.py
  - points.py
  - parity.py
  - agree.py
  - meow.py
  - mario.py
  - argv.py
  - exit.py
  - names.py
  - numbers.py
  - scores.py
  - uppercase.py
  - hogwarts.py
  - hogwarts.csv
  - phonebook.py
  - phonebook.csv

### Datatypes
- bool
- float
- int
- str - immutable

- range
- list
- tuple
- dict
- set

To run the program:
python "program-name.py"

Python is being interpreted, not compiled. You just run the code.
source code --> interpreter --> output

* Put main at the end of your file so that it only gets executed once all lines are read.

## Week 7 - SQL

### Programs
  - favorites.py -- analyze a .csv file in vscode
  -

.csv files are small, simple, and portable flat file databases

#### Data Collection

Some user errors are unavoidable once the data is collected, start with proper data collection. You must infer a proper data insertion.

``
  . --> any character
  .* --> 0 or more characters
  .+ --> 1 or more characters
  ? --> optional

  ^ --> start of input
  $ --> end of input
``

#### Relational Databases

You can interact with it using SQL, not GUI like Excel or Sheets. It is far more scalable. It is optimized for reading, selecting and easily use the data.


CRUD Acronym:
- CREATE
- READ
- UPDATE
- DELETE

`
sqlite3 favorites.db
.mode csv
.import favorites.csv favorites
`

##### Index

Index as a data structure allows a relational db to be singnificantly faster than a linear search.
  B-trees - wide and shallow tree and the database search is fast
Indexing is wasting space but is fast

##### SQL Injection Attacks

You push your username and password into a website and SQL pulls this to the backend where it gets checked against the values stored as your username and password. What if the SQL is not written well and the user interacts with the db, comments and single quote. Ability to inject SQL is dangerous.

Clicking a like button on Instagram

`
rows = db.execute("SELECT likes FROM posts WHERE id = ?", id);
likes = rows[0]["likes"]
db.execute("UPDATE posts SET likes = ? WHERE id = ?", likes + 1, id);
`

Not an atomic code as it gets executed line by line
Queries get combined which is a problem.

You need to lock the logic so it gets executed independently user by user.

Solutions:
  - locks
  - transactions

## Week 8 HTML, CSS, JavaScript

### Programs

http-server in vscode to see my local repository
getbootstrap.com for styling

#### Internet

Protocol is a set of rules, the ones used are tcp/ip
IP is a numerical identifier #.#.#.# # = 0 - 255 with 8 bits (4B of ip addresses) ip v4, now we use ip v6
TCP specifies the type of service = port HTTP as port 80 or 443 HTTPS -- configuring ports so that the machine knows what's coming and how to decode it
Timesharing | interconnection | Fragmentation of files
Transmission of data is protocolled with tcp or udp
DNS - has a hashtable with domain name and ip adresses

##### HTML, CSS, Javascript

memory updates in real-time using JavaScript

## Week 9 Flask -- try out FastAPI

* MVC

`
model - csv files, databases
view - visualizations, UI, templates
controller - business functions, python
`

To start the server `flask run`

### Programs
  - hello3
    - hello3/app.py
    - hello3/requirements.txt
    - hello3/static
    - hello3/templates/greet.html
    - hello3/templates/index.html
    - hello3/templates/layout.html

Website with a registration form

  - froshims0
    - froshims0/app.py
    - froshims0/requirements.py
      - froshims0/static
      - froshims0/templates/index.html
      - froshims0/templates/failure.html
      - froshims0/templates/success.html
      - froshims0/templates/layout.html

Storing data in a dictionary means that once the server stops running, we lose the data.

  - froshims3
    - froshims3/app.py
    - froshims3/requirements.py
      - froshims3/static/cat.jpg
      - froshims3/templates/error.html
      - froshims3/templates/registrants.html
      - froshims3/templates/index.html
      - froshims3/templates/layout.html

Added SQLite db, deregister support

  - froshims4
    - froshims4/app.py
    - froshims4/requirements.py
      - froshims4/templates/failure.html
      - froshims4/templates/registrants.html
      - froshims4/templates/index.html
      - froshims4/templates/layout.html

Added email confirmation
Program not running

  - froshims5
    - froshims5/app.py
    - froshims5/requirements.py
      - froshims5/templates/failure.html
      - froshims5/templates/registrants.html
      - froshims5/templates/index.html
      - froshims5/templates/layout.html

`
Session, and cookies - remembers login
Build an app that is statefull - remembers information. Making http stateful.
How Gmail and their long sessions work:
You intitially see a GET request and the http response with 200
http header saying that cookies are put to your cumpoter but are necesarry for shopping carts and logins. The server plants it to your local computer and puts the session to your hard disk. Cookies are letters and numbers (random).
`
  - login
    - login/app.py
    - login/requirements.txt
    - login/flask_session
      - ##### Cookies storage
    - login/templates/layout.html
    - login/templates/login.html
    - login/templates/index.html

  - store
    - store/app.py
    - store/requirements.txt
    - store/templates/layout.html
    - store/templates/cart.html
    - store/templates/books.html

`
Searches for shows in my sqlite db using browser, interacts with the server using JS, JSON.
`


  - shows0
    - shows0/app.py
    - shows0/requirements.txt
    - shows.db
    - shows.csv
    - shows0/templates/search.html
    - shows0/templates/index.html
    - shows0/templates/layout.html

Allows for autocomplete of my search using JS

  - shows1
    - shows1/app.py
    - shows.db
    - shows1/requirements.txt
    - shows1/templates/search.html
    - shows1/templates/index.html
    - shows1/templates/layout.html

Adding JSON. JSON is not user friendly formatted but is great for machines, APIs use this. Raw textual data programatically turned into html or anything else I like. List of dictionaries kind of. HTML, CSS use to present the data, python send or get the data, JS to make it dynamic and interactive.

  - shows2
    - shows2/app.py
    - shows.db
    - shows2/requirements.txt
    - shows2/templates/index.html
    - shows2/templates/layout.html

- http-server gives us a web-server but only with static content (no interaction) and does not execute the program
    - available in vs code and other places
- templating of HTML pages with jinja
- swift is used for iOS and Java for Android programming

Flask is a framework (number of libraries and conventions) which comes with python and allows me to run a local development server where I am able to interact with the application in real time and run the programs.

For this framework, there are 4 requirements
  - app.py (this is the program)
  - requirements.txt (what we need from flask)
  - static/ (pictures)
  - templates/ (different HTML websites)
    - we use layout.html and jinja for templating so I don't have to write a full page for every website


## Week 10 - Emoji

Computational thinking - logical an dmethodical thinking. Problem solving with computers. Input --> Output.
Correctness, design, style.
Abstraction
Precision in thinking and communication - get computers and people to understand what you mean
  - low level instractions - get into very simple facts everyone understands
