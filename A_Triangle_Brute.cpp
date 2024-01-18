// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Triangle //Accepted Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d;

    while (cin >> a >> b >> c >> d)
    {
        if ((a < b + c && b < a + c && c < a + b) || 
        (a < b + d && b < a + d && d < a + b) || 
        (a < d + c && d < a + c && c < a + d) || 
        (d < b + c && b < d + c && c < d + b))
            cout << "TRIANGLE" << endl;
        else if ((a == b + c || b == a + c || c == a + b) || 
        (a == b + d || b == a + d || d == a + b) || 
        (a == d + c || d == a + c || c == a + d) || 
        (d == b + c || b == d + c || c == d + b))
            cout << "SEGMENT" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}