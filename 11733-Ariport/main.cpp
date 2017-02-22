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
#define MAX 10050
#define SZ(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int


using namespace std;

struct edge
{
    int u,v,w;
};

bool test(edge a, edge b)
{
    return a.w<b.w;
}
int pr[MAX];

vector<edge>v;

int find(int r)
{
    return pr[r]=(pr[r]==r)? r : find(pr[r]);
}


int cnt,start,m;

int mst(int n)
{
    sort(all(v),test);
    for(int i=1; i<=n; i++)
        pr[i]=i;
    int s=0;
    cnt=0;
    for(int i=0; i<m && v[i].w<start; i++)
    {
        int x=find(v[i].u);
        int y=find(v[i].v);
        if(x!=y)
        {
            pr[x]=y;
            cnt++;
            s+=v[i].w;
            if(cnt==n-1)
                break;
        }
    }
    return s+(n-cnt)*start;
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    sc("%d",&t);
    for(int z=1; z<=t; z++)
    {
        v.clear();
        int n;
        sc("%d %d %d", &n,&m,&start);
        edge p;
        for(int i=0; i<m; i++)
        {
            cin>>p.u>>p.v>>p.w;
            v.push_back(p);
        }
        ll ans=mst(n);
        pf("Case #%d: %lld %d\n",z,ans,(n-cnt));
    }
    return 0;
}
