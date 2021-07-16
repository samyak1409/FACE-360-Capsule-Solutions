/*
In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char word[200]; cin >> word;

    for (int i=0; i<strlen(word); i++)
    {
        char chr = word[i];
        if ((chr>='A' && chr<='Z') || (chr>='a' && chr<='z'))
            cout << chr;
    }
}
