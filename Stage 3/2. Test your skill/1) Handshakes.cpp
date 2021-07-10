/*
It was Raj's first day at school. His teacher Anu asked the students to meet every other student in the class and introduce about themselves. The teacher asked them to handshake with each other when they meet. If there are n number of students in the class then find the total number of handshakes made by the students.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. First input corresponds to the total number of students. The output consists of 1 integer.

SAMPLE INPUT:

15

SAMPLE OUTPUT:

105
*/

#include <iostream>
using namespace std;

int main()
{
  	int n; cin >> n;

  	int res = 0;
  	for (int i=1; i<n; i++)
  	  	res += i;
  	cout << res;
}
