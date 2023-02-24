// Prints address of the first char in a string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Hi!";
    char *p = &s[0];
    printf("%p\n", p);
}