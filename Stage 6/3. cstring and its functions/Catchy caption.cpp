/*
Company Tesla has kept a contest for catchy caption for the image. They have a rule that the caption should not be more than 10 words. If the caption of a candidate is more than 10 words, then the candidature stands to be disqualified. Can you write a program to check whether a caption is eligible for the contest or not.
The maximum sizeof the caption is of 100 bytes.



[Hint:Use functions defined in cstring]
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char caption[100]; cin.getline(caption, sizeof(caption));

    int spaces_left = 10;
    for (int i=0; i<strlen(caption); i++)
    {
        if (caption[i] == ' ')
            spaces_left--;
        if (!spaces_left)
            break;
    }
    cout << "Caption " << ((spaces_left)? "" : "not ") << "eligible for the contest";
}
