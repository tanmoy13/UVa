/*
MMP""MM""YMM   db      `7MN.   `7MF'`7MMM.     ,MMF' .g8""8q.`YMM'   `MM'
P'   MM   `7  ;MM:       MMN.    M    MMMb    dPMM .dP'    `YM.VMA   ,V
     MM      ,V^MM.      M YMb   M    M YM   ,M MM dM'      `MM VMA ,V
     MM     ,M  `MM      M  `MN. M    M  Mb  M' MM MM        MM  VMMP
     MM     AbmmmqMA     M   `MM.M    M  YM.P'  MM MM.      ,MP   MM
     MM    A'     VML    M     YMM    M  `YM'   MM `Mb.    ,dP'   MM
   .JMML..AMA.   .AMMA..JML.    YM  .JML. `'  .JMML. `"bmmd"'   .JMML.
*/


#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <map>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 1010
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 10000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

vector <I> edge[MAX],cost[MAX];
I d[MAX],par[MAX];

int BFS(int src, int dst, int n)
{
    loop(i,n+2)
    {
        d[i]=inf;
        par[i]=-1;
    }
    d[src]=0;
    queue<I>Q;
    Q.push(src);
    I u,v,l;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        l=SZ(edge[u]);
        loop(i,l)
        {
            v=edge[u][i];
            if(d[v]>d[u]+cost[u][i])
            {
                d[v]=d[u]+cost[u][i];
                Q.push(v);
                par[v]=u;
            }
        }
    }
    return d[dst];
}

int find_pr(int r)
{
    if(par[r]==-1)
        return pf("%d",r);
    else
        find_pr(par[r]);
    pf(" %d",r);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    I n,m,t=0;

    while(getint(n) && n)
    {
        for(int i=1; i<=n; i++)
        {
            getint(m);
            loop(j,m)
            {
                I node,time;
                getint(node);
                getint(time);
                edge[i].pb(node);
                cost[i].pb(time);
            }
        }
        I u,v,ans;
        getint(u);
        getint(v);
        ans=BFS(u,v,n);
        pf("Case %d: Path = ",++t);
        if(u==v)
            pf("%d %d",u,v);
        else
        {
            find_pr(v);
        }
        pf("; %d second delay\n",ans);
        loop(i,n+2)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}

//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <cstring>
//#include <algorithm>
//#include <cstdlib>
//#include <vector>
//#include <sstream>
//#include <set>
//#include <queue>
//#include <stack>
//#include <list>
//#include <string>
//#include <map>
//
//#define pii pair <int,int>
//#define sc scanf
//#define pf printf
//#define Pi 2*acos(0.0)
//#define ms(a,b) memset(a, b, sizeof(a))
//#define pb(a) push_back(a)
//#define MP make_pair
//#define oo 1<<29
//#define dd double
//#define ll long long
//#define EPS 10E-10
//#define ff first
//#define ss second
//#define MAX 1010
//#define SZ(a) (int)a.size()
//#define getint(a) scanf("%d",&a)
//#define loop(i,n) for(int i=0;i<n;i++)
//#define all(a) a.begin(),a.end()
//#define intlim 2147483648
//#define inf 10000000
//#define rtintlim 46340
//#define llim 9223372036854775808
//#define rtllim 3037000499
//#define ull unsigned long long
//#define I int
//
//using namespace std;
//
//vector <I> edge[MAX],cost[MAX];
//I d[MAX],par[MAX];
//
//int BFS(int src, int dst, int n)
//{
//    loop(i,n+2)
//    {
//        d[i]=inf;
//        par[i]=-1;
//    }
//    d[src]=0;
//    queue<I>Q;
//    Q.push(src);
//    I u,v,l;
//    while(!Q.empty())
//    {
//        u=Q.front();
//        Q.pop();
//        l=SZ(edge[u]);
//        loop(i,l)
//        {
//            v=edge[u][i];
//            if(d[v]>d[u]+cost[u][i])
//            {
//                d[v]=d[u]+cost[u][i];
//                Q.push(v);
//                par[v]=u;
//            }
//        }
//    }
//    return d[dst];
//}
//
//int find_pr(int r)
//{
//    if(par[r]==-1)
//        return pf("%d",r);
//    else
//        find_pr(par[r]);
//    pf(" %d",r);
//}
//
//int main()
//{
//#ifndef ONLINE_JUDGE
//    freopen("in.txt","r",stdin);
//    ///freopen("out.txt","w",stdout);
//#endif // ONLINE_JUDGE
//    I n,m,t=0;
//    while(getint(n) && n)
//    {
//        for(int i=1; i<=n; i++)
//        {
//            getint(m);
//            loop(j,m)
//            {
//                I node,time;
//                getint(node);
//                getint(time);
//                edge[i].pb(node);
//                cost[i].pb(time);
//            }
//        }
//        I u,v,ans;
//        getint(u);
//        getint(v);
//        ans=BFS(u,v,n);
//        pf("Case %d: Path = ",++t);
//        if(u==v)
//            pf("%d %d",u,v);
//        else
//        {
//            find_pr(v);
//        }
//        pf("; %d second delay\n",ans);
//        loop(i,n+2)
//        {
//            edge[i].clear();
//            cost[i].clear();
//        }
//    }
//    return 0;
//}
