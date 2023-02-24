#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Use an array to store the values of the same datatype
    int scores[3];

    // Interactive input of scores
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}