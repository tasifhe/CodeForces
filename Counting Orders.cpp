// #include <bits/stdc++.h>
// #define int long long
// #define MOD 1000000007
// using namespace std;

// int t, n, a[200005], b[200005];

// signed main() {
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         for (int i = 1; i <= n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 1; i <= n; i++) {
//             cin >> b[i];
//         }
//         sort(a + 1, a + n + 1);
//         sort(b + 1, b + n + 1);
//         int ans = 1;
//         for (int i = n; i >= 1; i--) {
//             int cnt = lower_bound(b + 1, b + n + 1, a[i]) - b - 1;
//             ans = (ans * max(cnt - (n - i), 0LL) + MOD) % MOD;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
