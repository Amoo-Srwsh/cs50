#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long creadit_number;

    do
    {
        creadit_number = get_long_long("Number: ");
    } while (creadit_number < 0);

    if(check_valid(creadit_number))
      print_ccn_company(creadit_number);
    else
      printf("INVALID\n");
}

bool check_valid(long long number_card)
{
    int length = find_length(number_card);

    if (length == 13 || length == 15 || length == 16)
}