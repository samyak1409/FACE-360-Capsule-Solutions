/*
Karl loves to play with shapes and his sister is interested in Mathematics. They got a wooden box which is square in shape with length x cm and a round bangle with radius r cm and decided to play with it. They started playing and his sister asked him to find whether the circle will fit into the square. Help Karl to find whether the circle will fit into a square or not. If the circle fits, display “circle can be inside a square” else display “circle cannot be inside a square”.
INPUT FORMAT:

Input consist of 2 integers.

First input corresponds to the radius of a circle.

Second input corresponds to the length of a square.

SAMPLE INPUT:

77

65

SAMPLE OUTPUT:

circle cannot be inside a square
*/

#include <iostream>
using namespace std;

int main()
{
    int r, l;
    cin >> r >> l;

    if (2*r <= l)
        cout << "circle can be inside a square";
    else
        cout << "circle cannot be inside a square";
}
