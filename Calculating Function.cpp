//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Calculating Function//Accepted Solution
#include<bits/stdc++.h>
using namespace std;
//*f(n)=-1+2-3+...+(-1)^n*n

int main()
{
    long long n;
    cin >> n;
    cout << (n%2 == 0 ? n/2 : -(n+1)/2) << endl;
    return 0;
}
