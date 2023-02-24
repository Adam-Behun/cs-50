// Prints string's ASCII codes

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // thanks to cs50 library, otherwise it's just a character
    string s = "Hi!";
    printf("%i %i %i\n", s[0], s[1], s[2]);
}