/*
Highest mark in the class
The teacher who handles science for 3rd-standard class distributes the mark sheets to her students, she needs to find the highest mark among the "n" students. Help the teacher to find the maximum mark.
﻿Input Format:

The first input contains an integer 'n' which denotes the number of students

The remaining input denotes mark of 'n' students separated by spaces

Output Format:

Print the highest mark

Sample Input:

5

45 67 89 34 22

Sample Output:

89
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];

    int max = 0;
    for (int i=0; i<n; i++)
    {
        int m = arr[i];
        if (m>max)
            max = m;
    }
    cout << max;
}
