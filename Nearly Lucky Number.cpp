//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Nearly Lucky Number//Accepted Solution
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int count = 0;
    while (n)
    {
        if(n%10 == 4 || n%10 == 7)
        {
            count++;
        }
        n/=10;
    }
    if(count==4 || count ==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}