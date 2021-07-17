#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Add Your Name please : ");

    printf("Hello %s\n", name);
}