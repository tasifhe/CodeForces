// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, mid = 0;
//     cin>>n;

//     while(n--)
//     {
//         string sMain, sMainCopy, sNewPal, sNewPalCopy;
//         cin>>sMain;

//         int l = sMain.length();

//         sMainCopy = sMain;

//         if(l%2 == 1)
//         {
//             mid = ceil(l/2);
//             sNewPal[mid] = sMain[mid];
//         }

//         for(int i = 0; i<l; i++)
//         {
//             if(sMain[i] == sMain[l-1])
//             {
//                 sNewPal[mid - (i+1)] = sMain[i];
//                 sNewPal[mid + (i+1)] = sMain[l-1];
//                 l--;
//             }
//             else  
//             {
//                 break;
//             }
//         }

//         sNewPalCopy = sNewPal;

//         reverse(sNewPal.begin(), sNewPal.end());
        
//         if(sMain == sMainCopy)
//         {
//            cout<<"NO"<<endl;
//         }
//         else
//         {
//              if(sNewPalCopy == sNewPal)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
//     return 0;
// }
