//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Bit++//Accepted Solution
#include<iostream>

using namespace std;

int main()
{
    int n, x(0);
    cin>>n;

    string s;
    while(n--)
    {
        cin>>s;
        if(s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout<< x << endl;
    system("pause>0");
}