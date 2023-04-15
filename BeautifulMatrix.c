// //Solved by Tasif Hossain Emon
// //Student of SMUCT //BATCH 29th //ID:221071042

// //*Beautiful Matrix//Accepted Solution
// #include<stdio.h>

// int main()
// {
//     int n[5][5];
//     int m;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             scanf("%d", &n[i][j]);
//             if (n[i][j] == 1)
//             {
//                 m = abs(2-i) + (j-2);
//                 printf("%d", m);
//             }
//         }
//     }
//     return 0;
// }