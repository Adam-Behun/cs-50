// Incorrect -- gets a string from user using scanf
// use clang -o scanf1 scanf1.c

// Possible fixes:
// 1. allocate memory using char *s = malloc(4)
// 2. declare an array using char s[4]
// 3. and most appropriate using get_string from <cs50.h>

#include <stdio.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}