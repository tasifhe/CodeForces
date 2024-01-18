#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int totalTime = 0;
        int totalSolve = 0;
        for(int i = 0; i< n; i++)
        {
            if(s[i] == s[i-1])
                continue;
            else if(totalTime > n)
            break;
            else
            {
                totalTime+= (int) s[i] - 64;
                totalSolve++;
            }
        }
        cout<<totalSolve<<endl;
    }
}