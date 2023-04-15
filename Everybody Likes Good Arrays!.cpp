//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Everybody Likes Good Arrays!//Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int minOP(int n, int a[])
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2) == (a[i-1] % 2))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << minOP(n, a) << endl;
    }
    return 0;
}