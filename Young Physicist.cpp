//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Young Physicist//Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z,vx(0),vy(0),vz(0);
    cin>>n;

    while (n--)
    {
        cin>>x>>y>>z;
        vx+=x;
        vy+=y;
        vz+=z;
    }
    if(vx==0 && vy==0 && vz==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}