// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A_Triangle //Accepted Solution
//? Triangle Inequality Theorem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> sides(4);

    for (int i = 0; i < 4; ++i)
    {
        cin >> sides[i];
    }

    sort(sides.begin(), sides.end());

    if (sides[0] + sides[1] > sides[2] || sides[1] + sides[2] > sides[3])
    {
        cout << "TRIANGLE" << endl;
    }
    else if (sides[0] + sides[1] == sides[2] || sides[1] + sides[2] == sides[3])
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}