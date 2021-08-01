//Bad code
#include <iostream>
using namespace std;

char arrya_of_char [] = "!.,?:' ";

int strlen(string s, int &word, int &sentence, int &letter, int &results)
{
    int i=0;
    int space=0;
    for(;s[i] !='\0'; i++)
    {
        for(int j=1; j<=7; j++)
        {
           if(s[i] == arrya_of_char[j])
             space++;
           if(s[i] == arrya_of_char[j-5])
             sentence++;
        }
        if(s[i] == arrya_of_char[6])
            letter++;
    }

    letter++;
    return results = i - space;
}

main()
{
    string s;
    int num_word, num_letter, num_sentence, results;
    num_word = num_letter = num_sentence = results = 0;

    cout << "Text : ";
    getline(cin, s);
    strlen(s, num_word, num_sentence, num_letter, results);
    
    cout << "Words " << results << endl;
    cout << "letter " << num_letter << endl;
    cout << "sentence " << num_sentence;
    
}
