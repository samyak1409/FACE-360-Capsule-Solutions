/*
Dr. Strange has an experimental laboratory in a mysterious enclave. He is conducting an experiment to strange genes which will make him the most powerful sorcerer in the existence . He needs to create particular amount of bacteria. The bacteria multiplies exponentially. If he lets m bacteria to multiply n exponential times, he should check whether he will get the required amount of bacteria.
Input consists of three inputs. The no. of bacteria, m. The number in which it gets multiplied, n. The required number, req .
*/

#include <iostream>
#include <cmath>
using namespace std;

bool proceed(int m, int n, int req)
{
    return (pow(m, n) >= req)? true : false;
}

int main()
{
    int m, n, req;
    cin >> m >> n >> req;

    if (proceed(m, n, req))
        cout << "Doctor, you can proceed with your experiment.";
    else
        cout << "Sorry Doctor! You need more bacteria.";
}
