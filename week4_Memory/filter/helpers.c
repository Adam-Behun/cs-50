// not working

#include <helpers.h>

// Only let red through

int main(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = 0x00;
            image[i][j].rgbtGreen = 0x00;
        }
    }
}