/*
Jo is an aptitude trainer. She takes classes for college students for placements. She teaches students to find out highest common factor of three numbers. She has given homework for them to find out the same. Kindly help her to check whether their answers are correct or not.
*/

#include <iostream>
using namespace std;

bool accurate(int x1, int x2, int x3, int ans)
{
    // this passing all the test cases -_-
    // return (x1%ans == 0 && x2%ans == 0 && x3%ans == 0);

    // CORRECT SOLUTION ->
    // finding smallest number:
    int min;
    if (x1<x2 && x1<x3)
        min = x1;
    else if (x2<x3)
        min = x2;
    else
        min = x3;
    // calculating GCD:
    int gcd = 1;
    while (min >= 2)
    {
        if (x1%min == 0 && x2%min == 0 && x3%min == 0)
        {
            gcd = min;
            break;
        }
        min--;
    }

    return gcd==ans;
}

int main()
{
    int x1, x2, x3, ans; cin >> x1 >> x2 >> x3 >> ans;
    cout << "Answer is " << (accurate(x1, x2, x3, ans)? "correct" : "wrong") << '.';
}
