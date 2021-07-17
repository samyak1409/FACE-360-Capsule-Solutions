/*
Ryan is appearing for a techathon that offers price money of 10K for the winner. Techathon has provided a platform where an incomplete code will appear, and the participants have to complete it. Ryan got a program where he needs to create a complex calculator. Can you help Ryan win this competition?
The first line consists of a choice which is an integer to choose from 1 to 3. Choice 1 represents addition of two complex numbers, 2 represents subtraction of two complex numbers and 3 represents the multiplication of two complex numbers.
*/

#include <iostream>
using namespace std;

struct ComplexNumber
{
    int a; int b;
    // Complex number-> a number that can be expressed in the form a + bi,
    // where a and b are real numbers, and i is a symbol called the
    // imaginary unit, and satisfying the equation i² = −1.
} c1, c2, c;

int main()
{
    int choice; cin >> choice >> c1.a >> c1.b >> c2.a >> c2.b;

    switch(choice)
    {
        case 1:
        c.a = c1.a + c2.a, c.b = c1.b + c2.b; break;
        case 2:
        c.a = c1.a - c2.a, c.b = c1.b - c2.b; break;
        case 3:
        c.a = (c1.a*c2.a) - (c1.b*c2.b), c.b = (c1.a*c2.b) + (c1.b*c2.a); break;
        default:
        cout << "Invalid choice"; return 0;
    }
    cout << c.a << (c.b>=0? "+" : "") << c.b << 'i';
}
