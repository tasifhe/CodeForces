//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*Way Too Long Words//Accepted Solution
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string cha;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>cha;
        if (cha.length()>10)
        {
            cout<<cha[0]<<cha.length()-2<<cha[cha.length()-1]<<endl;
        }
        else
        {
            cout<<cha<<endl;
        }
    }
    return 0;
}