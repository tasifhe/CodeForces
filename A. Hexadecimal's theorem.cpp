//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*A. Hexadecimal's theorem //Accepted Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int arr[3];
    int temp;

    if (n == 0)
        cout << "0 0 0";
    else if (n == 1)
        cout << "0 0 1";
    else if (n == 2)
        cout << "0 1 1";
    else if (n == 3)
        cout << "1 1 1";
    else
    {
        arr[2] = round(n / ((1 + sqrt(5)) / 2));
        temp = round(arr[2] / ((1 + sqrt(5)) / 2));
        arr[1] = round(temp / ((1 + sqrt(5)) / 2));
        arr[0] = round(arr[1] / ((1 + sqrt(5)) / 2));
        cout << arr[0] << " " << arr[1] << " "<<arr[2];
    }
    return 0;
}