/*
Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squareroot(n) of its original size, she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?
INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given. Output corresponds to the number of days in which the given number of chalks will be used.

SAMPLE INPUT:

16

SAMPLE OUTPUT:

21
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  	int n; cin >> n;
  	cout << n + int(sqrt(n)) + 1;
}
