// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Problemsolving_Log //Accepted Solution
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> counter(26, 0);
        int solved = 0;
        char last = 'A';
        for (char c : s) {
            if (c != last) {
                if (counter[last - 'A'] >= (last - 'A' + 1)) {
                    solved++;
                }
                counter[last - 'A'] = 0;
            }
            counter[c - 'A']++;
            last = c;
        }
        if (counter[last - 'A'] >= (last - 'A' + 1)) {
            solved++;
        }
        cout << solved << endl;
    }
    return 0;
}
