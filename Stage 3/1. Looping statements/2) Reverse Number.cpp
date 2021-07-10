/*
Need to design a program wherein when the human enters an integer, the computer should return an integer in the reversed manner. Write a program to calculate the reverse of the given number.
Note: Take care of the leading zeros (e.g. 5200 gives 25). It means reversed number never has any trailing zeros.

Sample Input:

4235

Sample Output:

5324
*/

#include <iostream>
using namespace std;

int main()
{
  	int num;
  	cin >> num;

  	int rev = 0;
  	while (num != 0)
  	{
  	  	rev = rev*10 + num%10;
  	  	num /= 10;
  	}
  	cout << rev;
}
