// Prints string char by char, using strlen

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
    printf("\n");
}   