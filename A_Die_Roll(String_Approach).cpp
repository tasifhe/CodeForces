#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int Y, W;
    cin >> Y >> W;

    const string prob[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int X = max(Y, W);
    cout << prob[X] << endl;
    return 0;

    return 0;
}