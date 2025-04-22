//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*2090A. A_Treasure_Hunt //Accepted Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a;
        cin >> x >> y >> a;
        cout << (a % (x + y) >= x ? "YES" : "NO") << endl;
    }
    return 0;
}
