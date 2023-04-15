// //Solved by Tasif Hossain Emon
// //Student of SMUCT //BATCH 29th //ID:221071042
// #include<bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;

// int main()
// {
//     int t;
//     cin >> t;

//     int dp[100005];
//     dp[0] = 0;
//     for (int i = 1; i <= 100000; i++)
//     {
//         dp[i] = (dp[i - 1] + (1ll * (i-1) * i * (i+1) / 6) % MOD) % MOD;
//     }
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << dp[n] << endl;
//     }
//     return 0;
// }