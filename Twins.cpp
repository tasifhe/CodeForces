//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Twins//Accepted Solution
#include <bits/stdc++.h>
using namespace std;
 
#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int a;
    cin>>a;
    int b[a];
    int sum=0, sum2=0, count=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        sum+=b[i];
    }
    sum/=2;
    sort(b,b+a);
    for(int j=a-1;j>=0;j--)
    {
        sum2+=b[j];
        count++;
        if(sum2>sum)
        break;
    }
    cout<<count;
    return 0;
}