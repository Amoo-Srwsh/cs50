#include <stdio.h>
#include <cs50.h>
#include <math.h>
void function(float input)
{
    int all = 0;
    input = round(input * 100);

    while (input >= 25)
    {
        input = input - 25;
        all++;
    }
    while (input >= 10)
    {
        input = input - 10;
        all++;
    }
    while (input >= 5)
    {
        input = input - 5;
        all++;
    }
    while (input >= 1)
    {
        input = input - 1;
        all++;
    }

    printf("%d\n", all);
}
int main(void)
{
    float input;

    do
    {
        input = get_float("Change owed: ");
    }
    while (input < 0.00);

    function(input);

}