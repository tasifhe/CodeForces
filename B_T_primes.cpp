// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*B. T-primes //Accepted Solution

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n[10000000];

int main()
{
    n[0] =n[1] =1;
    for(int i=2; i<=10000000;i++)
    {
        if(n[i]==0)
        {
            for(int j=2;i*j<=10000000;j++)
            {
                n[i*j] = 1;
            }
        }
    }
    int t;
    cin>>t;

    ll N;
    ll sq;
    for(int i=0;i<t;i++)
    {
        cin>>N;
        sq=sqrt(N);
        if(N==1)
            cout<<"NO"<<endl;
        else if((sq*sq == N) && (n[sq]==0))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}