//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. Channel //Accepted Solution

#include <bits/stdc++.h>

using namespace std;

string processNotifications(int n, int a, int q, const string& s)
{
    int min_online = max(0, a);
    int max_online = min(n, a);

    for (char c : s)
    {
        if (c == '+')
        {
            min_online = max(0, min_online);
            max_online = min(n, max_online + 1);
        }
        else
        {
            min_online = max(0, min_online - 1);
            max_online = min(n, max_online);
        }
    }

    if (min_online == n && max_online == n)
    {
        return "YES";
    }
    else if (max_online >= n)
    {
        return "MAYBE";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;

        string result = processNotifications(n, a, q, s);
        cout << result << endl;
    }

    return 0;
}
