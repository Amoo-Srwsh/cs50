//SUBSTITUTION
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool check_string (string s)
{
    int len = strlen(s);
    if (len != 26)
    {
        return true;
    }
    int f[26] = { 0 };
    for (int i = 0; i < len; i++)
    {
        if (isdigit(s[i]))
        {
            return true;
        }
        int index = toupper(s[i]) - 'A';
        if (f[index] > 0)
        {
            return true;
        }
        f[index]++;
    }

    return false;
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

    string chars = argv[1];
    string str = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
            {
                int a = str[i] - 64;
                printf("%c", toupper(chars[a-1]));
            }
            else if (!isupper(str[i]))
            {
                int a = str[i] - 96;
                printf("%c", tolower(chars[a-1]));
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
