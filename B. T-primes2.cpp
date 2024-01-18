// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*B. T-primes //Accepted Solution

#include<bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        long long x;
        cin >> x;

        long long root = sqrt(x);

        if (root * root == x && isPrime(root))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
