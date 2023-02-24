#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Use an array to store the values of the same datatype
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}