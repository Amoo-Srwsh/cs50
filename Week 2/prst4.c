//SUBSTITUTION
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

char ch [25];

bool check_string (string s)
{
    int check = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            check++;
            ch[i] = s[i];
        }
    }

    if (check == 26)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (check_string(argv[1]))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }


    string str = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(str[i]))
        {
            if (!tolower(str[i]))
            {
                int a = str[i] - 64;
                printf("%c", ch[a-1]);
            }
            else
            {
                int a = str[i] - 96;
                printf("%c", tolower(ch[a-1]));
            }
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
