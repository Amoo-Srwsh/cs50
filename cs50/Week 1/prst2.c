#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start_number;
    do
    {
        start_number =  get_int("Start Size...");
    }
    while (start_number < 9);

    int end_number;
    do
    {
        end_number = get_int("End Size...");
    }
    while (end_number < start_number);

    int year = 0;
    while (start_number < end_number)
    {
        start_number += (start_number / 3) - (start_number / 4);
        year++;
    }

    printf("Years: %i\n", year);
}