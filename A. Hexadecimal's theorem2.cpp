#include <iostream>
#include <cstdio>
using namespace std;
long long dp[100];
void fib();

int main()
{
    //freopen("Input.txt", "r", stdin);
    fib();
    int i, j, k, made, num, x, y, z;
    cin>>num;
    if(num<=2){
        if(num==0) cout<<"0 0 0"<<endl;
        else if(num==1) cout<<"0 0 1"<<endl;
        else cout<<"0 1 1"<<endl;
    }
    else{
        bool ck=false;
        for(i=0; dp[i]<num; i++){
            for(j=i; dp[j]<num; j++){
                for(k=j; dp[k]<num; k++){
                    made = dp[i]+dp[j]+dp[k];
                    if(made==num){
                        x = dp[i];
                        y = dp[j];
                        z = dp[k];
                        ck=true;
                        break;
                    }
                    else if(made>num){
                        ck=false;
                        break;
                    }
                }
                if(ck==true) break;
            }
            if(ck==true) break;
        }
        if(made!=num) printf("I'm too stupid to solve this problem\n");
        else printf("%d %d %d\n", x, y, z);
    }
    return 0;
}
void fib()
{
    long long a=0, b=1, c;
    for(int i=0; i<=50; i++){
        c = a+b;
        a=b;
        b=c;
        dp[i]=a;
    }
}
