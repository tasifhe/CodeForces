//! Passed by CPH
//?_!Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        double p;
        int A = 0, B = 0;

        if (n % 2 == 0)
            p = n / 2;
        else
            p = ceil((float)n / 2);

        string S = s.substr(n-p, p);

        for (int i = 0; i < p; i++)
        {
            if (S[i] == 'A')
                A++;
            else
                B++;
        }
        if (A > B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}