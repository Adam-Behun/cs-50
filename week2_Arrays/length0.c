// Determines the length of a string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");

    int n = 0;
    // look for the 0 value as that's what behind the string
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}