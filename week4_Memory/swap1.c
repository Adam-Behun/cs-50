// Swaps two integers using pointers

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{

    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    // Swap pointers instead of values
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}
// Passing the addresses will change the original values
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}