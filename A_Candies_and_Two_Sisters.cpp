// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Candies_and_Two_Sisters //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    double N;
    LL res;
    cin>>t;

    while(t--)
    {
        res = 0;
        cin>>N;
        res=ceil((N/2)-1);
        cout<<res<<endl;
    }
    return 0;
}