// Prints address of the first char in a string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Hi!";
    char c = s[0];
    char *p = &c;
    printf("%p\n", p);
}