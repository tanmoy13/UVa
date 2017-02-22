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
#define MAX 20020
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

vector<I>edge[MAX],cost[MAX];
I d[MAX];
//struct data
//{
//    int city,dist;
//    bool operator < (const data& p) const
//    {
//        return dist>p.dist;
//    }
//};

int dijkastra(int src,int dst)
{
    loop(i,MAX)
        d[i]=inf;
    d[src]=0;
    queue <I> Q;
    I u,v;
    u=src;
    Q.push(u);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        I l=SZ(edge[u]);
        loop(i,l)
        {
            v=edge[u][i];
            if(d[v]>cost[u][i]+d[u])
            {
                d[v]=cost[u][i]+d[u];
                Q.push(v);
            }
        }
    }
    return d[dst];
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    I N,n,m,s,t;
    getint(N);
    loop(z,N)
    {
        getint(n);
        getint(m);
        getint(s);
        getint(t);
        I u,v,w;
        while(m--)
        {
            getint(u);
            getint(v);
            getint(w);
            edge[u].pb(v);
            edge[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        I ans=dijkastra(s,t);
        if(ans==inf)
            pf("Case #%d: unreachable\n",z+1);
        else
            pf("Case #%d: %d\n",z+1,ans);
        loop(i,MAX)edge[i].clear(),cost[i].clear();
    }
    return 0;
}
