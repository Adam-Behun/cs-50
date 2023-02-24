// Array of strings

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string words[2];

    words[0] = "Hi!";
    words[1] = "Bye!";

    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", words[i]);
    }
}