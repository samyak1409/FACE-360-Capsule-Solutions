/*
Write a C++ program to create a structure called employee with name, employee id, name, age designation and salary as data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan

ID of the Employee : 1

Age of the Employee : 24

Designation of the Employee : Manager

Salary of the Employee : 20000.00
*/

#include <iostream>
using namespace std;

struct Emp
{
    string name;
    int id;
    int age;
    string designation;
    int salary;
} e;

int main()
{
    cout << "Enter name:" << endl;
    cin >> e.name;
    cout << "Enter ID:" << endl;
    cin >> e.id;
    cout << "Enter age:" << endl;
    cin >> e.age;
    cout << "Enter designation:" << endl;
    cin >> e.designation;
    cout << "Enter Salary:" << endl;
    cin >> e.salary;

    cout << "Employee Details" << endl;
    cout << "Name of the Employee : " << e.name << endl;
    cout << "ID of the Employee : " << e.id << endl;
    cout << "Age of the Employee : " << e.age << endl;
    cout << "Designation of the Employee : " << e.designation << endl;
    cout << "Salary of the Employee : " << e.salary << endl;
}
