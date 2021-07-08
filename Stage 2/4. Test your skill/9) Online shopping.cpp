/*
Arun wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount % and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt in each website and decide which website has the lowest price.
INPUT & OUTPUT FORMAT:

Input consist of 9 integers. First three input corresponds to Flipkart details such as the amount of the shirt, discount offered and shipping charges. Next three input corresponds to Snapdeal details such as the amount of shirt, discount offered and shipping charge. Last three input corresponds to amazon details such as the amount of shirt, discount offered and shipping charge.

SAMPLE INPUT:

1000

50

50

900

50

70

800

10

200

SAMPLE OUTPUT:

In Flipkart: Rs.550

In Snapdeal: Rs.520

In Amazon: Rs.920

He will prefer Snapdeal
*/

#include <iostream>
using namespace std;

int main()
{
    int fa, fd, fs, sa, sd, ss, aa, ad, as;
    cin >> fa >> fd >> fs >> sa >> sd >> ss >> aa >> ad >> as;

    int f = fa*((100-fd)*.01) + fs;
    int s = sa*((100-sd)*.01) + ss;
    int a = aa*((100-ad)*.01) + as;
    cout << "In Flipkart Rs." << f << endl;
    cout << "In Snapdeal Rs." << s << endl;
    cout << "In Amazon Rs." << a << endl;

    string pref = "Flipkart";
    if (s<f && s<a)
        pref = "Snapdeal";
    else if (a<f && a<s)
        pref = "Amazon";
    cout << "He will prefer " << pref;
}
