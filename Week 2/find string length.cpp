#include <iostream>
using namespace std;

char arrya_of_char [6] = {'!','.',',','?',':',' '};
string cot = "'";

int strlen(string s)
{
    int i=0;
    int space=0;
    for(;s[i] !='\0'; i++)
    {
        for(int j=0; j<6; j++)
           if (s[i] == arrya_of_char[j] || s[i] == cot[0])
              space++;
    }
    return (i-space);
}

main()
{
    string s;
    cout << "Text : ";
    getline(cin, s);
    cout << strlen(s) << endl;
}