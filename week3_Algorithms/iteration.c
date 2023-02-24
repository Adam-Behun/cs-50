// Draw a pyramid using iteration

#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    // Get the height
    int height = get_int("Height: ");

    // Draw a pyramid
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}