//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. Ultra-Fast Mathematiciant //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1,s2;
    cin>>s1>>s2;

    string result;
    for(size_t i =0;i< s1.length(); i++)
    {
        result += (s1[i] == s2[i] ? '0' : '1');
    }

    cout<<result<<endl;

    return 0;
}