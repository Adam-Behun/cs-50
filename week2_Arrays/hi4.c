// Prints string's ASCII codes, including NUL
// NUL is used to show the end of the string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Hi!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}