/*
Remya is studying in 10th std and she was not good at maths. Her maths teacher asked to find a factorial of the given number. Can you help Remya by writing a program for the same.
Input Format:

The input consist of an integer

Output Format:

Print the factorial of a number which denotes an integer

Sample Input:

5

Sample Output:

120
*/

#include <iostream>
using namespace std;

int main()
{
  	int n;
  	cin >> n;

  	int ans = 1;
  	for (int i=n; i>0; i--)
  	  	ans *= i;
  	cout << ans;
}
