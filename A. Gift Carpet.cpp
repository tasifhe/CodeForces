#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector <string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string result = "YES";
        for(int i=0;i<m;i++)
        {
            vector<int> count(26,0);
            for(int j=0;j<n;j++)
            {
                count[v[j][i] - 'a']++;
            }
            if(*max_element(count.begin(), count.end()) <= n/2)
            {
                result = "NO";
                break;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}