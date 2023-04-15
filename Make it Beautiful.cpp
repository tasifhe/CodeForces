// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int t;
//   cin >> t;

//   while (t--) {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//       cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     bool found = false;
//     for (int i = 0; i < n; ++i) {
//       int sum = 0;
//       for (int j = 0; j < i; ++j) {
//         sum += a[j];
//       }
//       if (a[i] == sum) {
//         found = true;
//         break;
//       }
//     }

//     if (found) {
//       vector<int> b(n);
//       int left = 0, right = n - 1;
//       for (int i = 0; i < n; ++i) {
//         if (i % 2 == 0) {
//           b[i] = a[left++];
//         } else {
//           b[i] = a[right--];
//         }
//       }
//       cout << "YES\n";
//       for (int i = 0; i < n; ++i) {
//         cout << b[i] << ' ';
//       }
//       cout << '\n';
//     } else {
//       cout << "NO\n";
//       for (int i = 0; i < n; ++i) {
//         cout << a[i] << ' ';
//       }
//       cout << '\n';
//     }
//   }

//   return 0;
// }
