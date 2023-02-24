// constants

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int MINE = 2;

    int points = get_int("How many points did you lost? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We lost the same amount.\n");
    }
}