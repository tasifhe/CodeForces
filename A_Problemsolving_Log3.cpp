#include<bits/stdc++.h>
using namespace std;

int solveContest(string log) {
    int solvedProblems = 0;
    int timeSpent = 0;

    for (char ch : log) {
        int problemTime = ch - 'A' + 1;
        if (timeSpent >= problemTime) {
            ++solvedProblems;
            timeSpent = 0;
        } else {
            timeSpent = problemTime;
        }
    }

    return solvedProblems;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string log;
        cin >> log;

        int result = solveContest(log);
        cout << result << endl;
    }

    return 0;
}
