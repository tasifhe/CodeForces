// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A. Constructive Problems //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n, m;
        cin>>n>>m;
        cout << min(n,m) + abs(n-m) << endl;
    }
    return 0;
}