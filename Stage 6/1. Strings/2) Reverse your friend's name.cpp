/*
Your friend wants to see the pronunciation of his/ her name when it gets reversed. Help him/ her to find the reversed string using program.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string rev = string(str.rbegin(), str.rend());
    cout << rev;
}
