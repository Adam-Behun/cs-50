// Better design than points0.c

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lost? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We lost the same amount.\n");
    }
}