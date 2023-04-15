//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Stones on the Table//Accepted Solution
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i] == s[i+1])
        m++;
    }
    cout<<m;
    return 0;
}