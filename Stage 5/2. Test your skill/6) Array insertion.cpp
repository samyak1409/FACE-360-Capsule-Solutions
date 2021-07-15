/*
Arun and Ram were playing cards. Arun has 5 cards. Ram wants to insert a new card in between Arun's cards. Ram wants to find the position to insert the card. So help him to find the position to insert a certain card. If Ram inserts a card in a position other than the position of 5 cards, the game will be over. So play carefully. EXAMPLE: For example, consider an array having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step below after insertion a[1] = 1 , and a[2] = 2 and a[3] = 3.
Input & Output Format:

Assume that the maximum number of elements in the array is 20.

Sample Input:

Enter the number of elements in the array

5

Enter the elements in the array

1

2

3

4

5

Enter the location where you wish to insert an element

4

Enter the value to insert

10

Sample Output:

Array after insertion is

1

2

3

10

4

5
*/

#include <iostream>
using namespace std;

int main()
{
    // input:
    int n; cout << "Enter the number of elements in the array \n"; cin >> n;
    int arr[n+1]; cout << "Enter the elements in the array \n";  // note array of size n+1
    for (int i=0; i<n; i++)
        cin >> arr[i];
    int loc; cout << "Enter the location where you wish to insert an element \n"; cin >> loc;
    int value = NULL; cin >> value;
    if (value == NULL) {cout << "Invalid Input"; return 0;}
    cout << "Enter the value to insert \n";

    // insertion:
    for (int i=n; i>=loc; i--)  // shifting elements by 1 to the right
        arr[i] = arr[i-1];
    arr[loc-1] = value;  // putting value at location

    // output:
    cout << "Array after insertion is \n";
    for (int i=0; i<n+1; i++)
        cout << arr[i] << endl;
}
