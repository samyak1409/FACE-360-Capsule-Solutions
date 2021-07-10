/*
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297 Write a program to find whether the given number is a Kaprekar number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

Refer sample output for details.

SAMPLE INPUT & OUTPUT:

9

Kaprekar Number
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  	int k; cin >> k;

  	int n = 0, i = k;  // no. of digits in k
  	do {
  	  	i /= 10;
  	  	n += 1;
  	} while (i != 0);

  	int sq = k*k;
  	int d = int(pow(10, n));
  	int r = sq % d;  // right n digits
  	int l = (sq-r) / d;  // left n or n-1 digits
  	// cout << sq << endl << n << endl << r << endl << l;  //debugging

  	cout << ((r+l == k)?(""):("Not a ")) << "Kaprekar Number";
}
