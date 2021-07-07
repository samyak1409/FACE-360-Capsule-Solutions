/*
An island called “Wonderland” is filled with treasures. Raj is trying to get the treasure. To get it, he has to reach the end of the snow land in the island but got puzzled in the mid-way by a hint he got there. The hint is stating that to cross the snow land he has to jump on the ice stones which is of pairs else he will be drowned in the cold river. He has to check whether the number of ice stones is in pairs or not. Suggest him a logic to check the pairs of stones and say whether he can get the treasure or not.
The input should be an integer. The output should be either Possible or Not possible.

[Hint : Use ternary operator]
*/

#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  cout<<((n%2 == 0)?("Possible"):("Not possible"));
}
