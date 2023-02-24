// Implement a phone book without structs

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Declare two arrays, names and numbers
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    // Search for David
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}