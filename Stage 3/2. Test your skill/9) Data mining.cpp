/*
In the University examinations conducted during the past 5 years, the toppers registration numbers were 7126, 82417914, 7687 and 6657. Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers. In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. He termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a program to find whether a given number is a probable topper number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.

SAMPLE INPUT & OUTPUT:

143

Yes
*/

#include <iostream>
using namespace std;

int main()
{
  	int n; cin >> n;

  	int e = 0, o = 0, i = n;
  	do {
  	  	int d = i % 10;  // digit
  	  	((d%2 == 0)?(e):(o)) += d;
  	  	i /= 10;
  	} while (i != 0);

  	cout << ((e==o)?("Yes"):("No"));
}
