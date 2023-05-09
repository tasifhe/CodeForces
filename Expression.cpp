//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Expression//Accepted Solution
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans = a+b+c;
    ans = max(ans,a*b*c);
    ans = max(ans,a+b*c);
    ans = max(ans,a*b+c);
    ans = max(ans,(a+b)*c);
    ans = max(ans,a*(b+c));
    cout << ans << endl;
    return 0;
}