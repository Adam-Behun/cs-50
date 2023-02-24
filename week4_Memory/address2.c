// Stores and prints integer's address, and value

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i %p\n", n, p);
}