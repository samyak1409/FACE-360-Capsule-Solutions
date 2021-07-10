/*
Write a program to find the perfect numbers between a given range.
Input Format:

The first input contains an integer which denotes the starting number of the range

The second input contains an integer which denotes the ending number of the range

Output Format:

Print the perfect numbers in a given range

Sample Input:

1

10

Sample Output:

6
*/

#include <iostream>
using namespace std;

int main()
{
  	int l, u;
  	cin >> l >> u;

  	for (l++; l<u; l++)
  	{
  	  	int sum = 1;
  	  	for (int i=2; i<=l/2; i++)
  	  	{
  	  	  	if (l%i == 0)
  	  	  	  	sum += i;
  	  	}
  	  	if (sum == l)
  	  	  	cout << l << ' ';
  	}
}
