/*
Big Bunny lives in a colony. He is the only bunny in his colony who is not able to hop. On his 5th birthday, his father bunny gifted him a pogo stick as he could not jump like the other bunnies. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friends and decides to go using pogo sticks. Write a program to find the number of hops needed to reach his friends' house. Assume that Big Bunny's house is in the location (3,4).
INPUT FORMAT:

Input consists of two integers x,y.

The x and y correspond to x and y coordinates of his friends' house.

OUTPUT FORMAT:

The output is an integer. It corresponds to the number of hops needs to reach his friends' house.

SAMPLE INPUT:

5

10

SAMPLE OUTPUT:

6
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    cout << int(pow(pow(x-3, 2.0) + pow(y-4, 2.0), 0.5));
}
