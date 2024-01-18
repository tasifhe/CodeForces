#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int ones = 0, cost = 0;
        for(char c : s)
        {
            if(c == '1')
            {
                ones++;
            }
            else
            {
                if(ones > 0)
                {
                    ones--;
                }
                else
                {
                    cost++;
                }
            }
        }
        cost += ones;
        cout << cost << "\n";
    }
    return 0;
}
