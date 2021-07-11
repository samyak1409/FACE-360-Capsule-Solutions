/*
Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the Fibonacci Series are 0 and 1.
INPUT & OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

All text in bold corresponds to the input and the rest corresponds to output.

SAMPLE INPUT & OUTPUT:

5

The term 5 in the fibonacci series is 3
*/

#include <iostream>
using namespace std;

int fib(int n, int old, int sum)
{
    if (n == 0)  // base condition
        return sum;
    else
        return fib(n-1, sum, old+sum);  // recursion
}

int main()
{
    int n; cin >> n;
    cout << "The term " << n << " in the fibonacci series is " << ((n==1)? 0 : fib(n-2, 0, 1));
}
