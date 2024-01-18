// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Wallet_Exchange //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if((abs(a-b)%2)==0)
            cout<<"Bob \n";
        else
            cout<<"Alice \n";
    }
    return 0;
}