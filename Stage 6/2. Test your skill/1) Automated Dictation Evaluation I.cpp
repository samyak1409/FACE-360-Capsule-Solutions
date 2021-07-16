/*
These days kids are introduced to computers at a very early age and in some schools, the dictation test is conducted using computers. The teachers found it a bit difficult to evaluate these tests and they requested the school management to lessen their burden by automating this task. The 12th class students are learning C++ programming and they took up the task of automating the dictation evaluation. You need to check if the given string is equal to the correct string to evaluate each student. Can you please help them out? Write a C++ program to compare 2 strings using strcmp() function.
INPUT FORMAT:

Input consists of two strings.

Assume that the maximum length of the string is 50 and it contains only alphabets.

OUTPUT FORMAT:

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

Excellent

Excellent

It is correct
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[50], s2[50]; cin >> s1 >> s2;

    cout << ((strcmp(s1, s2))? "It is wrong" : "It is correct");
    // strcmp returns 0 if strings matches else an integer other than 0
}
