//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int k,n,w,t;
    cin>>k>>n>>w;

    t=k*((w*(w+1))/2);

    if((t-n) > 0)
        cout<<t-n;
    else
        cout<<"0\n";
    return 0;
}