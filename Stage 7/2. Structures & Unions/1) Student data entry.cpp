/*
It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data. They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student]
*/

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s;

int main()
{
    cin.getline(s.name, sizeof(s.name));
    cin >> s.roll >> s.marks;
    cout << endl << "Student Details" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
}
