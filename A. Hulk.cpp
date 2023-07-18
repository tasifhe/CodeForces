//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Hulk //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    if(n==1) cout<<"I hate it";
    else if(n>1) cout<<"I hate that";
    for(int i=2; i<n; i++)
    {

        if(i%2==1 && i!=n)
            cout<<" I hate that";

        else if(i%2==0 && i!=n)
            cout<<" I love that";
    }
    if(n%2==0 && n>1) cout<<" I love it";
    else if(n>1) cout<<" I hate it";
    cout<<endl;
    return 0;
}