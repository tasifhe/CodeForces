// //Solved by Tasif Hossain Emon
// //Student of SMUCT //BATCH 29th //ID:221071042

// //*Colorful Tree Again//Accepted Solution
// #include <bits/stdc++.h>
// using namespace std;
// const int N=2e5+10;
// vector<pair<int,int> >g[N];
// int f[N][2][2][3];
// bool vis[N];
// int n,m,x,y,z,c,d,rt;
// set<int>s;
// void dfs(int u)
// {
//     f[u][1][0][0]=0;
//     f[u][1][0][1]=0;
//     f[u][1][0][2]=0;
//     f[u][1][1][0]=0;
//     f[u][1][1][1]=0;
//     f[u][1][1][2]=0;
//     f[u][0][0][0]=0;
//     for(int i=0;i<g[u].size();i++)
//     {
//         int v=g[u][i].first,w=g[u][i].second;
//         if(v==rt)
//             continue;
//         dfs(v);
//         f[u][0][0][0]=max(f[u][0][0][0],f[v][0][0][0]+w);
//         f[u][0][0][1]=max(f[u][0][0][1],f[v][0][1][1]+w);
//         f[u][0][1][0]=max(f[u][0][1][0],f[v][0][1][1]+w);
//         f[u][0][0][1]=max(f[u][0][0][1],f[v][0][0][2]+w);
//         f[u][0][1][1]=max(f[u][0][1][1],f[v][0][1][2]+w);
//         f[u][0][1][2]=max(f[u][0][1][2],f[v][0][1][2]+w);
//     }
//     f[u][0][0][1]=max(f[u][0][0][1],f[u][0][0][0]);
//     f[u][0][1][1]=max(f[u][0][1][1],f[u][0][1][0]);
//     f[u][0][1][2]=max(f[u][0][1][2],f[u][0][1][0]);
// }
// int main()
// {
//     cin>>n>>m;
//     for(int i=1;i<n;i++)
//     {
//         cin>>x>>y>>z>>c;
//         g[x].push_back(make_pair(y,z));
//         g[y].push_back(make_pair(x,z));
//     }
//     rt=1;
//     dfs(rt);
//     while(m--)
//     {
//         cin>>d>>x;
//         if(d==0)
//         {
//             vis[x]=1;
//             s.insert(x);
//         }
//         else
//         {
//             vis[x]=0;
//             s.erase(x);
//         }
//         int res=0;
//         if(s.empty())
//         {
//             res=max(f[rt][0][0][0],f[rt][0][1][1]);
//         }
//         else
//         {
//             int u=*s.begin();
//             res=f[u][0][0][0];
//             for(int i=0;i<g[u].size();i++)
//             {
//                 int v=g[u][i].first,w=g[u][i].second;
//                 if(vis[v])
//                     res=max(res,f[v][0][0][0]+w);
//                 else
//                     res=max(res,f[v][0][1][1]+w);
//             }
//         }
//         cout<<res<<endl;
//     }
//     return 0;
// }