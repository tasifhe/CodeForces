//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Drinks//Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        sum += p;
    }
    cout.precision(12);
    cout << (double)sum/n << endl;
    return 0;
}
