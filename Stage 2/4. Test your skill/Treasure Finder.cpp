/*
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Lucy and Tina to decode the code.
INPUT FORMAT:

Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.

SAMPLE INPUT:

2

4

6

SAMPLE OUTPUT:

The treasure is in the box which has number 4.

The code to open the box is 2.
*/

#include<iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int s, m, l;  // finding smallest, mid, largest
  if (a<b && a<c)
  {
    s = a;
  	if (b<c) m = b, l = c;
  	else m = c, l = b;
  }
  else if (b<c)
  {
    s = b;
  	if (a<c) m = a, l = c;
  	else m = c, l = a;
  }
  else
  {
    s = c;
  	if (a<b) m = a, l = b;
  	else m = b, l = a;
  }

  int d;
  if (m%s==0 && l%s==0)  // checking if smallest value dividing all or not
    d = s;
  else
    d = 1;

  cout << "The treasure is in box which has number " << m << endl;
  cout << "The code to open the box is " << d;
}
