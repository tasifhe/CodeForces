// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*A. The Useless Toy //Accepted Solution

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char initDir, finalDir;
    int rotations;

    cin >> initDir >> finalDir >> rotations;

    rotations %=4;

    string cwDir = "v<^>";

    size_t initIndex = cwDir.find(initDir);

    char cwRes = cwDir[(initIndex + rotations) % 4];
    char ccwRes = cwDir[(initIndex + 4 - rotations) % 4];

    if (cwRes == ccwRes)
        cout << "undefined";
    else if (cwRes == finalDir)
        cout << "cw";
    else if (ccwRes == finalDir)
        cout << "ccw";
    else
        cout << "undefined";

    return 0;
}