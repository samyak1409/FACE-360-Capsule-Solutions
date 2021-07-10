/*
Sara is studying in 2nd standard and she has to play event in her school. The number is displayed on the screen and she has to count the number of digits in the displayed number. Can you help her by writing the program for the above scenario?
Input Format:

The input consist of an integer

Output Format:

Print the number of digits in the given number

Sample Input:

1234

Sample Output:

4
*/

#include <iostream>
using namespace std;

int main()
{
  	int x;
  	cin >> x;

  	int count_ = 0;
  	do {
  	  	x /= 10;
  	  	count_ += 1;
  	} while (x != 0);
  cout << count_;
}
