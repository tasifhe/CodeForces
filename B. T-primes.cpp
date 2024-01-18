// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//!B. T-primes //Accepted Solution

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;

    ll count = 0;
    ll N;
    for(int i=0; i<t;i++)
    {
        cin>>N;
        count = 0;
        ll res = sqrt(N);
        for(int i=1;i<res;i++)
        {
            if(res*res==N && res%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}