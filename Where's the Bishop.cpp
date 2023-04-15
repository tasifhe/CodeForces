// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         vector<int> row_sum(8), col_sum(8);
//         vector<string> board(8);

//         for (int i = 0; i < 8; i++) {
//             cin >> board[i];
//             for (int j = 0; j < 8; j++) {
//                 if (board[i][j] == '#') {
//                     row_sum[i]++;
//                     col_sum[j]++;
//                 }
//             }
//         }

//         int x = -1, y = -1;
//         for (int i = 0; i < 8; i++) {
//             for (int j = 0; j < 8; j++) {
//                 if (board[i][j] == '#' && row_sum[i] == 1 && col_sum[j] == 1) {
//                     x = i + 1;
//                     y = j + 1;
//                     break;
//                 }
//             }
//             if (x != -1) break;
//         }

//         cout << x << " " << y << endl;
//     }
//     return 0;
// }
