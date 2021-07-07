/*
A microwave oven manufacturer recommends to increase the heating time by 50% when two items are heated and to double the heating time when three items are heated. Heating more than three items at once is not recommended. Now, write a program to find out the recommended heating time.
INPUT FORMAT:

The first input is an integer which denotes the number of items

The second input is a floating point number which denotes the single item heating time.

OUTPUT FORMAT:

Print the recommended heating time in floating point with 2 decimal places.

If the number of items is more than three, print "Number of items is more".

Refer the sample output for formatting.

SAMPLE INPUT:

2

5.0

SAMPLE OUTPUT:

7.50
*/

#include<iostream>
using namespace std;

int main()
{
  int n; float uht;  // number, unit heating time
  cin >> n >> uht;

  if (n < 4)
  {
    float rht = uht;  // recommended heating time
    if (n == 2)
      rht += rht / 2;
    else if (n == 3)
      rht *= 2;
    cout << rht;
  }
  else
    cout << "Number of items is more";
}
