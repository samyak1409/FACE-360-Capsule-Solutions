/*
Tia is new to programming. She needs to write a program which will receive the input as a floating point number. She needs to print the decimal part of the floating point of the number. She has written a few lines of code. Can you fill up the rest.
Read the input as string. Use string operations on the input to derive the answer easily.
*/

#include <iostream>
using namespace std;

int main()
{
    string fnum; cin >> fnum;

    cout << "Floating part is : ";
    int dec_pos = fnum.find('.');
    if (dec_pos != -1)
        cout << fnum.substr(dec_pos+1);
}
