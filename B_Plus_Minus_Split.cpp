// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*B_Plus_Minus_Split //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            if(str[i] == '+')
                sum+=1;
            else sum-=1;
        }
        cout << abs(sum) << endl;
    }
    return 0;
}