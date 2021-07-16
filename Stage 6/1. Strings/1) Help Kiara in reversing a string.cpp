/*
Please help Kiara to write the correct code to reverse a string.
*/

#include <iostream>
using namespace std;

int main()
{
    // not using C-style strings coz don't like them.
    string str;
    getline(cin, str);

    string rev;
    // method 1:
    for (int i=str.length()-1; i>=0; i--)
        rev.push_back(str[i]);
    // method 2:
    // rev = string(str.rbegin(), str.rend());
    // https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
    cout << rev;
}
