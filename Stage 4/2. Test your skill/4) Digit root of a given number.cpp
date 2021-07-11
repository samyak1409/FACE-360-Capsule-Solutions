/*
Write a program to find the repeated sum of digits of a number until it becomes a single-digit number.
Input Format:

The input contains an integer which denotes 'n'

Output Format:

Print the single digit number

Sample Input

88

Sample Output

7

Explanation:

Step 1: 8+8 = 16

Step 2: 1+6 = 7

sum of digits of a number until it becomes a single-digit number which is 7 here.
*/

#include <iostream>
using namespace std;

int digit_root(int n)
{
    int temp = n, count = 0; n = 0;
    while (temp)
    {
        n += temp % 10;
        temp /= 10;
        count++;
    }
    if (count == 1)  // base condition
        return n;
    else
        return digit_root(n);  // recursion
}

int main()
{
    int n; cin >> n;
    cout << digit_root(n);
}
