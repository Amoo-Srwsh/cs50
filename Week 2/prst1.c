//Readability - challenge
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
  string s = get_string("Text: ");
  int num_words, num_sentences, num_letters;
  num_words = num_sentences = num_letters = 0;
  for (int i = 0; len = strlen(s); i < len; i++)
  {
      if (isalpha(s[i]))
         num_letters++;
      if ((i == 0 && s[i] != ' ') || //..
