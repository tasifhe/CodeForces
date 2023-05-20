//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*New Palindrome//Accepted Solution
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s = s.substr(0, s.size() / 2);
    int k = unique(s.begin(), s.end()) - s.begin();
    cout << (k == 1 ? "NO" : "YES") << '\n';
  }
}