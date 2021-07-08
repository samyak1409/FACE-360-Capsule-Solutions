/*
Cicily is organizing a typing competition. Each participant who clears the competition receives a certificate and a cash prize. The initial mark is ten. For each mistake made, one mark is reduced. If the participant's score is an absolute value, he/she will be rewarded. Can you help Cicily to write a program where she enters the id of a participant and the score obtained, and the program should print the result for that candidate.
Id and marks is of integer type.
*/

#include <iostream>
using namespace std;

int main()
{
    int id, marks;
    cin >> id >> marks;

    if (marks>0)
        cout << id << " is eligible for reward.";
}
