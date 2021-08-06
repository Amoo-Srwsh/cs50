#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

bool check_valid (string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
            return false;
    }
    return true;
}

int main(int argc, string argv[])
{
    if (argc != 2 || !check_valid(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("plaintext:  ");
    string str = get_string("ciphertext: ");


    int k = atoi(argv[1]);

    printf("ciphertext: ");
    for (int i = 0; i < strlen(str); i++)
    {
        char c = str[i];
        if (isalpha(c))
        {
            char a = 'A';
            if (tolower(c))
                a = 'a';
            c = (c - a + k) % 26 + a;
            printf("%c", c);
        }
        else
            printf("%c", c);
    }

    return 0;
}
