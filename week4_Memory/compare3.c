// Print two string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // prints strings
    printf("%s\n", s);
    printf("%s\n", t);

// Compare the two print statements to understand what gets printed as a string

    // prints positions of the first char of a string
    printf("%p\n", s);
    printf("%p\n", t);

    // prints positions of the first char of a string
    printf("%p\n", &s[0]);
    printf("%p\n", &t[0]);
}