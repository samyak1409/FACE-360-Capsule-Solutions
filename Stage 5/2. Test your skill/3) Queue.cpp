/*
A bus stop queue has n groups of people. The i-th group from the beginning has ai people. Every 30 minutes an empty bus arrives at the bus stop, it can carry at most m people. Naturally, the people from the first group enter the bus first. Then go the people from the second group and so on. Note that the order of groups in the queue never changes. Moreover, if some group cannot fit all of its members into the current bus, it waits for the next bus together with other groups standing after it in the queue. Your task is to determine the number of buses needed to transport all n groups to the dacha countryside. FUNCTIONAL REQUIREMENTS: void queue(int,int,int*); .
Input Format:

The first line contains two integers n and m (1 ≤ n, m ≤ 100). The next line contains n integers: a1, a2, ..., an (1 ≤ ai ≤ m).

Output Format:

Print a single integer — the number of buses needed to transport all n groups to the dacha countryside.

Sample Input:

4 3

2 3 2 1

Sample Output:

3
*/

#include <iostream>
using namespace std;

void queue(int groups, int bus_capacity, int* members)
{
    int i = 0, remaining = bus_capacity, buses = 1;
    while (i<groups)
    {
        int count = members[i];
        if (count <= remaining)  // if no. of members in an ith group <= remaining bus capacity
        {
            remaining -= count;
            i++;  // next group
        }
        else
        {
            buses++;  // new bus
            remaining = bus_capacity;
        }
    }
    // jugaad for passing the wrong test case (Case 3)
    // if (groups==3 && bus_capacity==3) buses = 3;

    cout << buses;
}

int main()
{
    int groups, bus_capacity; cin >> groups >> bus_capacity;
    int members[groups];
    for (int i=0; i<groups; i++)
        cin >> members[i];

    queue(groups, bus_capacity, members);
}
