//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Chat Room//Accepted Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[]={'h', 'e', 'l', 'l', 'o'};
    char b[101];
    int c=0;
    cin>>b;
    int l=strlen(b);
    for(int i=0;i<l;i++)
    {
        if(b[i]==a[c])
        {
            c++;
        }
    }
    if(c>=5)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}