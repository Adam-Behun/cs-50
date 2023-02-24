// Determines the length of a string using a function

#include <stdio.h>
#include <cs50.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}


int string_length(string s)
{
    // Count characters until 0 (NUL) apears
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}