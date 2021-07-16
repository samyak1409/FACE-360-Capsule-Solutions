/*
These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase and lowercase. Refer sample input and output for formatting specifications.

Sample Input:

This program is very easy 2 complete

Sample Output:

Vowels : 10

Consonants : 19

White spaces : 6

Digits : 1

Symbols : 0
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[200]; cin.getline(str, sizeof(str));

    int v = 0, c = 0, ws = 0, d = 0, s = 0;
    string vowels = "AEIOUaeiou";
    for (int i=0; i<strlen(str); i++)
    {
        char chr = str[i];
        if ((chr>='A' && chr<='Z') || (chr>='a' && chr<='z'))
        {
            if (vowels.find(chr) < vowels.length())
                v++;
            else
                c++;
        }
        else if (chr==' ')
            ws++;
        else if (chr>='0' && chr<='9')
            d++;
        else
            s++;
    }
    cout << "Vowels:" << v << endl;
    cout << "Consonants:" << c << endl;
    cout << "White Spaces:" << ws << endl;
    cout << "Digits:" << d << endl;
    cout << "Symbols:" << s << endl;
}
