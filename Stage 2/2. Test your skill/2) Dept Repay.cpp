/*
Alice wanted to start a business and she was looking for a venture capitalist. Through her friend Bob, she met the owner of a construction company who is interested to invest in an emerging business. Looking at the business proposal, the owner was very much impressed with Alice's work. So he decided to invest in Alice's business and hence gave a green signal to go ahead with the project. Alice bought Rs.X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be given by Alice to the owner. The owner impressed by proper repayment of the financed amount decides to give a special offer of 2% discount on the total interest at the end of the settlement. Find the amount given back by Alice and also find the total amount. (Note: All rupee values should be in two decimal points).
INPUT FORMAT:

Input consists of 3 integers.

The first integer corresponds to the principal amount borrowed by Alice.

The second integer corresponds to the rate of interest

The third integer corresponds to the number of years.

OUTPUT FORMAT:

The output consists of 4 floating point values.

The first value corresponds to the interest.

The second corresponds to the amount.

The third value corresponds to the discount.

The last value corresponds to the final settlement.

All floating point values are to be rounded off to two decimal places

SAMPLE INPUT:

100

1

10

SAMPLE OUTPUT:

10

110

0.20

109.8
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
    cin >> x >> r >> y;

    float i = x * y * r / 100, d = i * 0.02, a = x + i;
    cout << i << endl << a << endl << d << endl << a-d;
}
