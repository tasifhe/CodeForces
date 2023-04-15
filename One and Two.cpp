// //* Solved by Tasif Hossain Emon
// //* Student of SMUCT //BATCH 29th //ID:221071042
// #include <bits/stdc++.h>
// using namespace std;

// int t, n, a[1005], ans;

// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         int cnt1 = 0, cnt2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] == 1) cnt1++;
//             else cnt2++;
//         }
//     ans = -1;
//     for (int i = 0; i < n; i++)
//     {
//         int p1 = 1, p2 = 1;
//         for (int j = 0; j <= i; j++)
//             p1 *= a[j];
//         for (int j = i + 1; j < n; j++)
//             p2 *= a[j];
//             if (p1 == p2)
//             {
//                 ans = i + 1;
//                 break;
//             }
//     }
//     cout << ans << endl;
//     }
// return 0;
// }