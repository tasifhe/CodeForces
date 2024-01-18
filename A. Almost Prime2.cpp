//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. Almost Prime //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;

    vector<int> pF(n+1, 0);

    for(int i=2; i<=n;i++)
    {
        if(pF[i]==0)
        {
            for(int j=i;j<=n;j+=i)
            {
                pF[j]++;
            }
        }
    }

    int count = 0;
    for(int i=2;i<=n;++i)
    {
        if(pF[i]==2)
            count++;
    }

    cout<<count<<endl;

    return 0;
}