//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*New Palindrome//Accepted Solution
#include<bits/stdc++.h>

int main()
{
    int n, s;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    std::cin >> n;
    while (n--)
    {
        std::cin >> s;
        if (s == 1)
            count1++;
        else if (s == 2)
            count2++;
        else if (s == 3)
            count3++;
        else if (s == 4)
            count4++;
    }

    int total = count4 + count3 + count2 / 2;
    count1 -= count3;
    if (count2 % 2 == 1)
    {
        total++;
        count1 -= 2;
    }
    if (count1 > 0)
    {
        total += (count1 + 3) / 4;
    }

    std::cout << total << std::endl;
    return 0;
}
