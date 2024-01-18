// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*B_Following_Directions //Accepted Solution
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n];
        int a(0), a1(0), m(0);
 
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
 
            if(s[i]=='U')
                a++;
            
            else if(s[i]=='D')
                a--;
            
            else if(s[i]=='R')
                a1++;
            
            else if(s[i]=='L')
                a1--;
            
            if(a==1 && a1==1)
                m++;
            
        }
        if(m>0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 
    return 0;
}