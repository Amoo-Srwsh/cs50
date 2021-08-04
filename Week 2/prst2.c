#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
    if (argc != 2 || !check_valid(srgv[1]))
    {
        printf("Usage: ./caesar key\n")
        return 1;
    }
}
