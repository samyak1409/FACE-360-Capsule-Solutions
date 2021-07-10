/*
The terrorist hijacked the famous Taj hotel in Mumbai and it has many VIPs, children, and family members. The hotel manager decides to inform the police but he wants to send the message without the knowledge of terrorists. So, he sends the message in the form of an encrypted number. Unfortunately, the message is received by the terrorist. The terrorist has to enter the number if they want to read the message. If the resultant of adding the encrypted number and number entered by a terrorist is a perfect number, then they can read the message. Otherwise, they can't read the message.
A perfect number is a number which is equal to the sum of its proper positive divisors, excluding the number itself.

Input Format:

The first input contains an integer which denotes the encrypted number

The second input contains an integer which denotes the number entered by a terrorist

Output Format:

If the resultant of adding the encrypted number and number entered by a terrorist is a perfect number, then print "They can read the message". Otherwise, print "They can't read the message".

Sample Input:

3

3

Sample Output:

They can read the message

Explanation:

6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.
*/

#include <iostream>
using namespace std;

int main()
{
  	int x, y;
  	cin >> x >> y;

  	x += y; y = x/2;
  	int sum = 1;
  	for (int i=2; i<=y; i++)
  	{
  	  	if (x%i == 0)
  	  	sum += i;
  	}
  	cout << "They can" << ((sum==x)?(""):("'t")) << " read the message";
}
