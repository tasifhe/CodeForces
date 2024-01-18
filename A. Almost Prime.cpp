//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. Almost Prime //Accepted Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, amount(0);
    scanf("%d", &n);

    bool bu[3000] = {false};
    int primeFact[3000] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!bu[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                bu[j] = true;
                primeFact[j] += 1;
            }
        }

        if (primeFact[i] == 2)
        {
            amount += 1;
        }
    }
    printf("%d\n", amount);
    return 0;
}