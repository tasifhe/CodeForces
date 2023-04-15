//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Next Round//Accepted Solution
#include<iostream>

using namespace std;

int main()
{
    int n,k,a[100],i,count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}