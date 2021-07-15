/*
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. Now, you need to find out the span values for the given number of days and their daily prices. For example, if an array of 7 day's prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} . FUNCTIONAL REQUIREMENTS: void stockSpan(int,int*);
Input Format:

Input consists of n+1 integers. The first integer corresponds to n, the number of days. The next n integers correspond to stock prices on days 1, 2...n.

Output Format:

The output consists of n integers that correspond to the span values.

Sample Input:

7

100

80

60

70

60

75

85

Sample Output:

1

1

1

2

1

4

6
*/

#include <iostream>
using namespace std;

void stockSpan(int days, int* prices)
{
    // bruteforce taking quadratic time
    for (int i=0; i<days; i++)
    {
        int span = 1;
        for (int j=i-1; j>=0 && prices[i]>prices[j]; j--)
            span++;
        cout << span << endl;
    }
    // use stack for linear time https://www.geeksforgeeks.org/the-stock-span-problem/
}

int main()
{
    int days; cin >> days;
    int prices[days];
    for (int i=0; i<days; i++)
        cin >> prices[i];

    stockSpan(days, prices);
}
