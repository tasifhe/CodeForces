//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Jumps //Accepted Solution
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

typedef long long ll;
const int N = 1e6+5;

int  s[N];

void jumpsSolve()
{
    int x;
    cin >> x;
    int lb = 1;
    int r = 1500;
    while (lb < r)
    {
        int mid = (lb + r) / 2;
        if (s[mid] < x)
            lb = mid + 1;
        else
            r = mid;
    }
    if (s[lb] == x + 1)
        lb++;
    cout << lb << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    s[1] = 1;
    for (int i = 2; i <= 1500; i++)
    {
        s[i] = s[i - 1] + i;
    }
    cin >> t;
    while (t--)
    {
        jumpsSolve();
    }
    return 0;
}