/*
Nowadays, we use social media a lot. We usually send messages, pictures, etc to each other. So, encrypting and decrypting should be done properly to avoid hacking. Irin is developing a program for the same where color encrypting is done with the help of Armstrong numbers. Can you help Irin to write program to check whether a number is an Armstrong number or not.
*/

#include <iostream>

int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}

int arm(int n)
{
    //Your code goes here
    int count = 0, temp = n;
    // 1) counting no. of digits in n:
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    // 2) calculating sum:
    int sum = 0; temp = n;
    for (int i=0; i<n; i++)
    {
        sum += power(temp%10, count);
        temp /= 10;
    }
    return sum==n;
}

int main()
{
    int n;
    std::cin>>n;
    if(arm(n)==1)
        std::cout<<"Kindly proceed with encrypting";
    else
        std::cout<<"It is not an Armstrong number";
}
