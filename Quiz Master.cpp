// //*Solved by Tasif Hossain Emon
// //*Student of SMUCT //BATCH 29th //ID:221071042
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         int a[n];
//         int cnt[m] = {0};
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             cnt[a[i] % m]++;
//         }
//         int min_diff = INT_MAX;
//         for (int i = 0; i < m; i++) {
//             if (cnt[i] == 0) {
//                 cout << -1 << endl;
//                 goto end;
//             }
//         }
//         int min_smartness = INT_MAX, max_smartness = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             bool is_proficient = true;
//             for (int j = 0; j < m; j++) {
//                 if ((a[i] + j) % m != 0) {
//                     is_proficient = false;
//                     break;
//                 }
//             }
//             if (is_proficient) {
//                 min_smartness = min(min_smartness, a[i]);
//                 max_smartness = max(max_smartness, a[i]);
//             }
//         }
//         min_diff = max_smartness - min_smartness;
//         cout << min_diff << endl;
//         end:;
//     }
//     return 0;
// }
