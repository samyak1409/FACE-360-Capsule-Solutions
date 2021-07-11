/*
Read two integers as input and swap them using call by reference, without using a third variable.
*/

#include <iostream>
using namespace std;

void swap_by_ref(int& a, int& b)  // reference!
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b; cin >> a >> b;

    cout << "Before swapping a= " << a << " and b=" << b;
    swap_by_ref(a, b);
    cout << endl;
    cout << "After swapping a= " << a << " and b=" << b;
}
