//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Soldier and Bananas//Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum = 0;
    for(int i=1;i<=w;i++)
    {
        sum+=i;
    }
    int ans =  (sum*k) - n;
    if(ans < 0)
        cout<<"0";
    else
        cout<<ans;

    return 0;
}