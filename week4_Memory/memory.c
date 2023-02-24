// Valgrind

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72; // arrays are 0-indexed
    x[2] = 73;
    x[3] = 74;

    // not freeing the memory afterwards
}