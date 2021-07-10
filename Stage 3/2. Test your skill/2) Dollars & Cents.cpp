/*
Write a C++ program to add two dollars and cents.
INPUT & OUTPUT FORMAT:

Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.

SAMPLE INPUT:

30

10

140

99

SAMPLE OUTPUT:

171

9
*/

#include <iostream>
using namespace std;

int main()
{
  	int d1, c1, d2, c2;
  	cin >> d1 >> c1 >> d2 >> c2;

  	int d = d1 + d2, c = c1 + c2;
  	if (c>100)
  	{
  	  	int msb = c / 100;
  	  	d += msb; c -= msb * 100;
  	}
  	cout << d << endl << c;
}
