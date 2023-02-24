// Linear search for names

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    // Declaring an array of names
    string names[] = {"Bill","Charlie","Fred","George","Ginny","Percy","Ron",};

    // Search for Ron
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}