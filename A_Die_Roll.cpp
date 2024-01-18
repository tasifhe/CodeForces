// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Die_Roll //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int y,w,x;
    cin>>y>>w;

    int max_roll = max(y, w);

    int fax_out = 6 - max_roll+1;

    int gcd = __gcd(fax_out, 6);

    if(fax_out == 0)
        cout<<"0/1\n";
    else if(fax_out ==6)
        cout<<"1/1\n";
    else
        cout<<fax_out/gcd << "/" << 6/gcd <<endl;

    return 0;
}