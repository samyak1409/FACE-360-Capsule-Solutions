/*
In a certain area, there was a camp of polio drops team. They need to search for every baby in a particular area. They want to find the baby and take out the baby for polio drops. Help them to find the baby to avoid polio attacks. (remove the occurrence of the word "the" from the entered string).
Input Format:

The input is a string.

Text that is bold represents the input.

Output Format:

The output is a string.

Sample Input:

remove the occurrence of the word from entered string

Sample Output:

remove occurrence of word from entered string
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str; getline(cin, str);

    int i;
    while (true)
    {
        i = str.find("the ");
        if (i < str.length())
            str.erase(i, 4);
        else
            break;
    }
    cout << str;
}
