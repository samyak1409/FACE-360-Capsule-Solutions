/*
Dora is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango tree only in the 1st row, 1st column and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not? Now, write a program to check whether the given number denotes a mango tree or not.
INPUT FORMAT:

Input consists of 3 integers.

The first input denotes the number of rows.

The second input denotes the number of columns.

The third input denotes the tree number.

OUTPUT FORMAT:

If the given number is a mango tree, print "Yes". Otherwise, print "No"

Refer the sample output for formatting.

SAMPLE INPUT:

5

5

11

SAMPLE OUTPUT:

Yes
*/

#include <iostream>
using namespace std;

int main()
{
  	int r, c, n;
  	cin >> r >> c >> n;

  	if ((n>0 && n<=c) || (n%c==1) || (n%c==0))
  	  	cout << "Yes";
  	else
  	  	cout << "No";
}
