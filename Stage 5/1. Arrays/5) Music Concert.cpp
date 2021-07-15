/*
Sid Sriram's concert is going to happen by this week. Event coordinators have sold all tickets, odd number tickets are given to males and even number tickets are given to females. Finally, they need a count of males and females to allocate seats separately in the auditorium.
Note: Use dynamic memory allocation

Input Format:

The first input contains an integer which denotes the total number of tickets

The remaining 'n' input denotes the ticket numbers

Output Format:

Print the count of male

Print the count of female

Sample Input:

5

67 89 34 56 33

Sample Output:

3

2
*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    // Dynamically allocating memory:
    int* p = (int*)calloc(n, sizeof(int));
    // calloc -> contiguous allocation of blocks of memory
    // n-> no of blocks, sizeof(int)-> size of one block
    // (int*)-> type casting void pointer (returned by calloc) to int pointer
    // by default / initially those blocks will be filled with 0s

    // updating the 0s with the real values
    for (int i=0; i<n; i++)
        cin >> *(p+i);

    int males = 0, females = 0;
    // Counting the male and female count:
    for (int i=0; i<n; i++)
    {
        if (p[i]%2==0)
            females += 1;
        else
            males += 1;
    }

    // De-allocating the dynamically allocated memory:
    free(p);
    p = NULL;

    cout << males << endl << females;
}
