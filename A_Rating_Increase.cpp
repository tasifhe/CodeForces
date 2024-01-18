// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Rating_Increase //Accepted Solution
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string ab;
    cin >> ab;
    int n = ab.size();
    for(int i=n-1;i>0;i--)
    {
        string a =ab.substr(0,i);
        string b =ab.substr(i);

        if(b[0]=='0')
            continue;
        if(stoll(b) > stoll(a))
        {
            cout<<a<<" "<<b<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
