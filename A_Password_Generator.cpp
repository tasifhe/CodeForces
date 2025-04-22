// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Password_Generator //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //int digit = 1;
        int a,b,c;
        cin>>a>>b>>c;
        
        string digits = "0123456789";
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string lower = "abcdefghijklmnopqrstuvwxyz";

        string password = "";

        for(int i=0; i<max({a,b,c}); i++)
        {
            if(i<a) password += digits[i%digits.size()];
            if(i<b) password += upper[i%upper.size()];
            if(i<c) password += lower[i%lower.size()];
        }
        cout<<password<<endl;
    }
    return 0;
}