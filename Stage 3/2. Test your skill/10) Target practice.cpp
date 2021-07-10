/*
Drona normally trains his disciples using a board which consists of concentric circles. When a student correctly hits the center of the concentric circles, his score is 100. The score gets reduced depending on where the students hit on the board. When the student hits outside the board, his score is 0. Drona will not allow a student to have his food unless he scores 100. Arjuna will always hit the target in his first attempt and he will leave early. Others may take more turns to reach a score of 100. Now, write a program to determine the number of turns a disciple takes to reach the target score of 'n'.
INPUT FORMAT:

Input consists of a list of positive integers.

The first integer corresponds to the target score 'n'.

Assume that all the other integers input are less than or equal to n.

OUTPUT FORMAT:

The output consists of a single line. Refer the sample output for format details.

SAMPLE INPUT & OUTPUT:

100

4

40

60

The number of turns is 3
*/

#include <iostream>
using namespace std;

int main()
{
  	int target; cin >> target;

  	int i = 0;
  	do {
  	  	int score; cin >> score;
  	  	cout << score << endl;
  	  	target -= score;
  	i++;
  	} while (target>0);
  cout << "The number of turns is " << i;
}
