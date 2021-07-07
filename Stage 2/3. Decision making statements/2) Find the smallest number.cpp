/*
Dora is in first grade. Her brother Darwin wants her sister to participate in Math Olympiad. Darwin gives two numbers to Dora. She has to tell the smallest number among them. Can you create a program for the same.
Input should be two integers.
*/

#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  if (x<y)
    cout << x << " is smallest number";
  else
    cout << y << " is smallest number";
  return 0;
}
