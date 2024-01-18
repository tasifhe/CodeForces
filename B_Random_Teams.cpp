// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*B_Random_Teams //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

LL pairs(LL n)
{
    return n * (n - 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    LL n, m;
    cin >> n >> m;
    LL a(n / m), b(n % m);
    LL min = pairs(a) * (m - b) + pairs(a + 1) * b;
    LL max = pairs(n - m + 1);
    cout << min << " " << max << endl;
    return 0;
}