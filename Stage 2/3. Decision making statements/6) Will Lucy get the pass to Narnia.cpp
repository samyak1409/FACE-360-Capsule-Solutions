/*
Lucy has entered to Narnia through the wardrobe. Once she enters to Narnia, she is encountered with a genie. Genie takes care of Narnia from trespassers. As Genie finds Lucy to be genuine, Genie allows Lucy to enter Narnia if she answers his question. He gives Lucy two numbers and asks her to perform the basic arithmetic operation like addition, subtraction etc. She need to perform the same and tell the answer. If she tells right answer, she gets the pass to Narnia.
The input should consists of two integers and the operation to be performed which should be corresponding integer. Print the Menu as

Addition(+)
Subtraction(-)
Multiplication(*)
Division(/)
Remainder(%)
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
  	cout << "Menu" << endl;
  	cout << "1.Addition" << endl;
  	cout << "2.Subtraction" << endl;
  	cout << "3.Multiplication" << endl;
  	cout << "4.Division" << endl;
   	cout << "5.Remainder" << endl;
    cin >> z;

  	switch (z)
    {
        case 1: cout << x+y; break;
        case 2: cout << x-y; break;
        case 3: cout << x*y; break;
        case 4: cout << x/y; break;
        case 5: cout << x%y; break;
        default: cout << "Invalid operation";
    }
}
