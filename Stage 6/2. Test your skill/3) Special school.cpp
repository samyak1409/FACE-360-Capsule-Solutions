/*
A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing the letters backward or in reverse. Once special care is taken to correct this issue and once they are introduced to words, they will start writing the words in the proper format. The teachers do not want to discourage the children at the start itself and they have decided to mark the words written in reverse also as correct. Can you please help the teacher in correcting the answer sheets by writing a C++ program? Write a C++ program to check whether the second word is the reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings.

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.

Sample input &output

Excellent

tnellecxE

It is correct
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[50], s2[50]; cin >> s1 >> s2;

    int n = strlen(s2);
    for (int i=0; i<n/2; i++)
    {
        int copy = s2[n-1-i];
        s2[n-1-i] = s2[i];
        s2[i] = copy;
    }
    cout << (strcmp(s1, s2)? "It is wrong" : "It is correct");
}
