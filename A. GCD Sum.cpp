#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll GCD(ll a,ll b)
{
    if (b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
ll getSum(ll n)
{
    ll sum = 0;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        for (int i = 0; i < 3; ++i)
        {
            ll sum = getSum(n + i);
            if (GCD(n+i,sum)>1)
            {
                cout<<n+i<<"\n";
                break;
            }
        }
    }
}