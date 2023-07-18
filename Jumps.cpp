#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

void jumpsSolve() {
    int x;
    cin >> x;
    int position = ceil((-1 + sqrt(1 + 8 * x)) / 2);
    cout << position << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        jumpsSolve();
    }
    return 0;
}
