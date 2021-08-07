//github (Amoo-Srwsh)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

bool check_valid(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]))
        {
            return false;
        }
    }

    return true;
}

int main(int argc, string argv[])
{
    if (argc <= 1 || argc > 2 || check_valid(argv[1]))
    {
        printf("Error\n");
        return 1;
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            int a = 65;
            if (!isupper(c))
            {
                a = 97;
            }
            printf("%c", (c - a + k) % 26 + a);
        }
        else
        {
            printf("%c", c);
        }
    }


    printf("\n");

    return 0;
}
