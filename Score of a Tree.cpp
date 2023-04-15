// //*Solved by Tasif Hossain Emon
// //*Student of SMUCT //BATCH 29th //ID:221071042
// #include<bits/stdc++.h>
// using namespace std;

// const int mod = 1e9 + 7;

// void dfs(int node, int parent, vector<vector<int>> &tree, vector<vector<int>> &dp) {
//     if (tree[node].empty()) {
//         return;
//     }
//     dp[node][0] = 1;
//     for (int child : tree[node]) {
//         if (child == parent) {
//             continue;
//         }
//         dfs(child, node, tree, dp);
//         dp[node][0] = (dp[node][0] + dp[child][1]) % mod;
//         dp[node][1] = (dp[node][1] + dp[child][0]) % mod;
//     }
//     dp[node][1] = (dp[node][1] + dp[node][0]) % mod;
// }

// int solve(int n, vector<pair<int, int>> edges) {
//     vector<vector<int>> tree(n + 1);
//     for (auto [u, v] : edges) {
//         tree[u].push_back(v);
//         tree[v].push_back(u);
//     }
//     vector<vector<int>> dp(n + 1, vector<int>(2));
//     dfs(1, 0, tree, dp);
//     return dp[1][1];
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> edges(n - 1);
//         for (int i = 0; i < n - 1; i++) {
//             cin >> edges[i].first >> edges[i].second;
//         }
//         cout << solve(n, edges) << endl;
//     }
//     return 0;
// }
