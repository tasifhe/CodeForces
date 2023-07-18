// #include <iostream>
// #include <vector>

// using namespace std;

// const int MAXN = 200;
// const int MOD = 1000000007;

// int modpow(int a, int b, int m) {
//     int res = 1;
//     while (b) {
//         if (b & 1) res = (long long)res * a % m;
//         a = (long long)a * a % m;
//         b >>= 1;
//     }
//     return res;
// }

// int modinv(int a, int m) {
//     return modpow(a, m-2, m);
// }

// int chinese_remainder(vector<int>& a, vector<int>& m) {
//     int M = 1;
//     for (int i = 0; i < m.size(); i++) {
//         M = (long long)M * m[i] % MOD;
//     }

//     int x = 0;
//     for (int i = 0; i < a.size(); i++) {
//         int Mi = M / m[i];
//         x = (x + (long long)a[i] * Mi % MOD * modinv(Mi, m[i]) % MOD) % MOD;
//     }

//     return x;
// }

// vector<int> perfect_array(int n) {
//     vector<int> a(n, 0), m(n, 0);

//     for (int i = 0; i < n; i++) {
//         m[i] = i + 1;
//     }

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = 0; j < i; j++) {
//             sum = (sum + a[j]) % m[i];
//         }
//         a[i] = ((long long)m[i] - sum) % m[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum = (sum + a[i]) % MOD;
//     }

//     int x = chinese_remainder(a, m);

//     for (int i = 0; i < n; i++) {
//         a[i] = (long long)(i+1) * x % MOD;
//     }

//     return a;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a = perfect_array(n);

//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
