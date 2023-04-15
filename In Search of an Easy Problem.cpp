//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*In Search of an Easy Problem//Accepted Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    while (n>0)
    {
        cin>>i;
        if(i==1){
            cout<<"HARD"<<endl;
            return 0;
        }
        n--;
    }
    cout<<"EASY"<<endl;
    return 0;
}