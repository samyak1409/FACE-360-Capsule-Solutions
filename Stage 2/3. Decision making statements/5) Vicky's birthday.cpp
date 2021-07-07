/*
Vicky's birthday is on February 29th. He can only celebrate his birthdays in leap year. Can you help Vicky to determine whether he can celebrate his birthday in the year mentioned by him.
Input should be an integer. (Usage : nested if)
*/

#include <iostream>
using namespace std;

int main()
{
  int y;
  cin >> y;

  if (y%4 == 0)
  {
    if (y%100 != 0)
      cout << "Vicky can celebrate his birthday.";
	else
    {
      if (y%400 == 0)
	    cout << "Vicky can celebrate his birthday.";
      else
        cout << "Vicky can't celebrate.";
    }
  }
  else
    cout << "Vicky can't celebrate.";
}
