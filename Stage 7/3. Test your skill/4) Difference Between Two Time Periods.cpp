/*
Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24

8 15 23

SAMPLE OUTPUT:

4:0:1
*/

#include <iostream>
using namespace std;

struct Time
{
    int h, m, s;  // hour, minute, second

    void print_difference(Time t1, Time t2, Time t)
    {
        t.h = t1.h - t2.h, t.m = t1.m - t2.m, t.s = t1.s - t2.s;
        if (t.s<0) { t.s += 60; t.m -= 1; }
        if (t.m<0) { t.m += 60; t.h -= 1; }
        cout << t.h << ':' << t.m << ':' << t.s;
    }
} t1, t2, t;

int main()
{
    cin >> t1.h >> t1.m >> t1.s >> t2.h >> t2.m >> t2.s;

    Time().print_difference(t1, t2, t);
}
