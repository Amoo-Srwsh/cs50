#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int average = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0, k = width - 1; j < width / 2; j++, k--)
        {
            int rgb[2][3] = {{image[i][j].rgbtRed,image[i][j].rgbtGreen,image[i][j].rgbtBlue},
                            {image[i][k].rgbtRed,image[i][k].rgbtGreen,image[i][k].rgbtBlue}};

            image[i][j].rgbtRed = rgb[1][0];
            image[i][j].rgbtGreen = rgb[1][1];
            image[i][j].rgbtBlue = rgb[1][2];

            image[i][k].rgbtRed = rgb[0][0];
            image[i][k].rgbtGreen = rgb[0][1];
            image[i][k].rgbtBlue = rgb[0][2];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
