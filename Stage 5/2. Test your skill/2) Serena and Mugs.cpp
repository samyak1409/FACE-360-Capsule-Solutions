/*
Serena narrated an interesting game to her friends. The game goes like this. Initially, there is a table with an empty cup and n water mugs on it. Then all the players take turns to move. During a move, a player takes a non-empty mug of water and pours all the water from it into the cup. If the cup overfills, then we assume that this player has lost the game. As soon as Serena's friends heard of the game, they wanted to play it. Serena, on the other hand, wanted to find out whether her friends can play the game in such a way that there are no losers. You are given the volumes of all the mugs and the cup. Also, you know that Serena has (n - 1) friends. Determine if Serena's friends can play the game so that nobody loses. FUNCTIONAL REQUIREMENTS: int printresult(int*,int,int);
Input format:

The first line contains integers n and s (2 ≤ n ≤ 100; 1 ≤ s ≤ 1000) — the number of mugs and the volume of the cup. The next line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10). Number ai represents the volume of the i-th mug.

Output format:

In a single line, print "YES" (without the quotes) if her friends can play in the described manner, and "NO" (without the quotes) otherwise.

Sample input:

 3 4

 1 1 1

Sample output:

 YES
*/

#include <iostream>
using namespace std;

void printresult(int* mugs, int n, int cup)
{
    int total = 0;
    for (int i=0; i<n; i++)
        total += mugs[i];
    cout << ((total <= cup)? "YES" : "NO");
}

int main()
{
    int n, cup; cin >> n >> cup;
    int mugs[n];
    for (int i=0; i<n; i++)
        cin >> mugs[i];

    printresult(mugs, n, cup);
}
