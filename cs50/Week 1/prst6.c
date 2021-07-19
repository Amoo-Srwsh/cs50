
#include <stdio.h>
#include <cs50.h>

bool check_valid(long long );
int find_length(long long );
bool checksum(long long );

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

    return (length == 13 || length == 15 || length == 16) && checksum(number_card);
}

int find_length(long long number)
{
    int len;
    for (len = 0; number !=0; number /=10, len++);
    return len;
}

bool checksum(long long card_number)
{
    int sum = 0;
    for (int i = 0; card_number != 0; i++, card_number /= 10)
    {
        if (i % 2 == 0)
           sum += card_number % 10;
        else
        {
            int dig = 2 * (card_number % 10);
            sum += dig / 10 + dig % 10;
        }
    }
    return (sum % 10) ==  0;
}

