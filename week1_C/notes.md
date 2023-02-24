# Terminal, Linux, C, Git


## Terminal basics

-   cd
-   cp
-   ls
-   mkdir
-   mv
-   rm
-   rmdir
-   cd .. --> step back
-   . --> current directory `

To create a file use `code "program name"`

To run the program use (make sure you are in that directory) `make "program name" and then ./"program name"`

## Linux

Star working on Linux as most servers and software is developed on Linux

## Introduction to C

Format codes for printing in C:

-   %c - char
-   %f - float
-   %i - int
-   %li - long int
-   %s - string

## Git and GitHub

https://www.youtube.com/watch?v=MJUJ4wbFm_A&list=WL&index=2&t=12s&ab_channel=CS50

## What is it
* Keeps track of changes in code
* Synchronize code across devices and people
* Test changes to code without losing the original
* Revert back to the older version

## Branching 
- git branch shows all branches of codes on the repo

## Commands
- git clone <url> 
		- makes a copy of a repo in my local machine
		- fork creates a copy of someone else's repo		
-  git add <filename>
		- start tracking this repo
- git commit -m "message"
		- save this version
- git status
		- where am I and what's saved
-  git push
		- send commited changes to the remote repo
-  git pull
		- retrieve changes from the online repo on my local machine
-  git log
		- shows a history of commits and messages
-  git reset --hard <commit to the special log > 
		- reverts back to a previous comit

Process: git only cares about tracking so deletion is not a problem. Git add/rm the files you want to/not want track. Git commit to commit the changes. Git push to push the changes into virtual environment. 