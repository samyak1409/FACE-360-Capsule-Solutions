/*
Write a C++ program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

SAMPLE INPUT:

1729

SAMPLE OUTPUT:

Harshad Number
*/

#include <iostream>
using namespace std;

int main()
{
  	int n; cin >> n;

  	int sum = 0, m = n;
  	do {
  	  	sum += m % 10;
  	  	m /= 10;
  	} while (m>0);

  	cout << ((n%sum == 0)?(""):("Not ")) << "Harshad Number";
}
