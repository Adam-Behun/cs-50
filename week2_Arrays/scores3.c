#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Use an array to store the values of the same datatype
    int scores[3];
    // Use for loop to get input
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}