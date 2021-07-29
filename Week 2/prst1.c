#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    int num_words, num_sentence, num_letter;
    num_words = num_sentence = num_letter = 0;
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isalpha(s[i]))
           num_letter++;
        if ((i == 0 && s[i] != ' ') || (i != len - 1 && s[i] == ' ' && s[i + 1] != ' '))
           num_words++;
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
           num_sentence++;
    }
    float L = (num_letter / (float)num_words) * 100;
    float S = (num_sentence / (float)num_words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    printf("Grade %i\n", index);
}
