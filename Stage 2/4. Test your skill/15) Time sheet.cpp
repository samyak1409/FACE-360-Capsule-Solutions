/*
Jeevitha just started to work as a programming trainer for UIT's Placement Cell. She is paid Rs.100 an hour, with a few exceptions. She earns an extra Rs.15 an hour for any part of a day where she works for more than 8 hours, and an extra Rs.25 an hour for hours beyond 40 in any one week. Also, she earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. And there is no bonus for working more than 40 hours in a week. You'll be given the number of hours Jeevitha worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute her salary for the week.
INPUT & OUTPUT FORMAT:

Input consists of 7 integers less than or equal to 24 on separate lines

Print Jeevith's salary for a week.

SAMPLE INPUT:

0

8

8

8

10

6

0

SAMPLE OUTPUT:

4030
*/

#include <iostream>
using namespace std;

int main()
{
  	int su, mo, tu, we, th, fr, sa;
  	cin >> su >> mo >> tu >> we >> th >> fr >> sa;

  	int weekdays = mo + tu + we + th + fr;
  	float sal = (weekdays + sa + su) * 100;

  	if (mo > 8)
  	  	sal += (mo-8) * 15;
  	if (tu > 8)
  	  	sal += (tu-8) * 15;
  	if (we > 8)
  	  	sal += (we-8) * 15;
  	if (th > 8)
  	  	sal += (th-8) * 15;
  	if (fr > 8)
  	  	sal += (fr-8) * 15;

  	sal += sa * 25;  // 25% of 100
  	if (sa > 8)
  	  	sal += (sa-8) * 15 * 1.25;

  	sal += su * 50;  // 50% of 100
  	if (su > 8)
  	  	sal += (su-8) * 15 * 1.5;

  	if (weekdays > 40)  // yes, the question was not clear
  	  	sal += (weekdays-40) * 25;

  	cout << sal;
}
