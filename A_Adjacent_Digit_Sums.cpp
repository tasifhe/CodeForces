// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*Adjacent_Digit Sums //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;

    int d=x+1-y;

    if(d>=0 && d%9==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}