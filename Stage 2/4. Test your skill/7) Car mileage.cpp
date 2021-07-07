/*
Nanu bought a new car and for the first time, he wants to go to a temple. Without checking how much petrol is available in the car, he started traveling. After reaching a certain distance, he remembered that he didn't check the petrol level of his car. Then he checks the petrol level and calculates how much distance he must travel to reach the destination. Find whether he can reach the destination with the available petrol. Mileage is also known. Display “Can reach” or “Cannot reach” based on the situation.
INPUT & OUTPUT FORMAT:

Input consists of 1 float and 2 integers values.

First input corresponds to the mileage which is of float datatype.

Second input corresponds to liters of petrol available.

Third input corresponds to the distance to be travelled.

The output consists of one string.

SAMPLE INPUT:

11

6

67

SAMPLE OUTPUT:

Cannot reach
*/

#include<iostream>
using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y >> z;

  cout << "Can" << ((x*y>=z)?(""):("not")) << " reach";
}
