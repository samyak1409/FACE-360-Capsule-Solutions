/*
Jeeva is the chairman of ABC university and he is planned to improve students education. So he is conducted meeting for all departments HODs. Write a program to help all department HODs to display student details. Create a structure called Student. struct Student { char name[30]; char department[20]; int yearOfStudy; float cgpa; }; Write a program to get the details of 'n' students and to display their details, sorted in ascending order based on the name.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of students

1

Enter the details of student 1

Enter name

krish

Enter department

mca

Enter year of study

3

Enter cgpa

7.6

Details of students

Student 1

Name : krish

Department : mca

Year of study : 3

CGPA : 7.6
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Student
{
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};

int main()
{
    // input
    cout << "Enter the number of students \n";
    int n; cin >> n;
    Student s[n];
    for (int i=0; i<n; i++)
    {
        cout << "Enter the details of student " << i+1 << endl;

        cout << "Enter name \n";
        cin >> s[i].name;
        cout << "Enter department \n";
        cin >> s[i].department;
        cout << "Enter year of study \n";
        cin >> s[i].yearOfStudy;
        cout << "Enter cgpa \n";
        cin >> s[i].cgpa;
    }

    // sorting using bubble sort
    Student temp;
    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (strcmp(s[j].name, s[j+1].name) > 0)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }

    // output
    cout << "Details of students \n";
    for (int i=0; i<n; i++)
    {
        cout << "Student " << i+1 << endl;
        cout << "Name:" << s[i].name << endl;
        cout << "Department:"  << s[i].department << endl;
        cout << "Year of study:"  << s[i].yearOfStudy << endl;
        cout << "CGPA:" << s[i].cgpa << endl;
    }
}
