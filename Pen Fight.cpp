// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 5;
// int t, n, q, a[N], s[N], p[N];
// map<int, int> idx;

// int find(int x)
// {
//     if (p[x] != x) p[x] = find(p[x]);
//     return p[x];
// }

// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         idx.clear();
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             s[i] = 1;
//             p[i] = i;
//             idx[a[i]] = i;
//         }
//         cin >> q;
//         while (q--)
//         {
//             int op, x, y;
//             cin >> op >> x;
//             if (op == 1)
//             {
//                 cin >> y;
//                 int px = find(x), py = find(y);
//                 if (px == py) continue;
//                 if (s[px] > s[py])
//                 {
//                     p[py] = px;
//                     s[px] += s[py];
//                 }
//                 else
//                 {
//                     p[px] = py;
//                     s[py] += s[px];
//                 }
//             }
//             else if (op == 2)
//             {
//                 cout << s[find(x)] << endl;
//             }
//             else
//             {
//                 cout << find(idx[x]) << endl;
//             }
//         }
//     }
//     return 0;
// }