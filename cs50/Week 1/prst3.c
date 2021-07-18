//Copyright Amoo-Srwsh
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int count = 1;
    int input;
    do
    {
        input = get_int("Height: ");
    }
    while (input < 1 || input > 8);

    for (int i = 0; i < input; input--)
    {
        for (int j = 0; j < input - 1; j++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < count; hash++)
        {
            printf("#");
        }

        count++;

        printf("\n");
    }
}
