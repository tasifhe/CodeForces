//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. IQ test //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n, even(0), lastodd(0), lasteven(0);
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            even+=1;
            lasteven = i;
        }
        else
        {
            even -=1;
            lastodd = i;
        }
    }

    cout << (even>0 ? lastodd : lasteven) << endl;

    return 0;
}