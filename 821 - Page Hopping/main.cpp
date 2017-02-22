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
#define MAX 1000
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

vector<I>v[MAX],inp;
map<int,int>mp;
int d[MAX],cnt,sm;
bool visited[MAX];
int BFS(int s)
{
    ms(visited,false);
    ms(d,-1);
    queue<I>Q;
    Q.push(s);
    visited[s]=true;
    d[s]=0;
    I sum=0;
    while(!Q.empty())
    {
        I p=Q.front();
        Q.pop();
        loop(i,SZ(v[p]))
        {
            I q=v[p][i];
            if(!visited[q])
            {
                visited[q]=true;
                d[q]=d[p]+1;
                sum+=d[q];
                Q.push(q);
            }
        }
    }
    return sum;
}

void clean()
{
    I zz=mp.size();
    mp.clear();
    inp.clear();
    loop(i,zz+5)
    {
        v[i].clear();
    }
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    I a,b,x,y,cas=1;
    while(cin>>a>>b && a && b)
    {
        cnt=1;
        sm=0;
        x=a,y=b;
        if(!mp[x])
        {
            mp[x]=cnt++;
            inp.pb(x);
        }
        if(!mp[y])
        {
            mp[y]=cnt++;
            inp.pb(y);
        }
        v[mp[x]].pb(mp[y]);
        while(cin>>x>>y && x && y)
        {
            if(!mp[x])
            {
                mp[x]=cnt++;
                inp.pb(x);
            }
            if(!mp[y])
            {
                mp[y]=cnt++;
                inp.pb(y);
            }
            v[mp[x]].pb(mp[y]);
        }
        I z=SZ(inp);
        loop(i,z)
        {
            sm+=BFS(mp[inp[i]]);
        }
            double ans=((double)sm/(z*(z-1)));
        pf("Case %d: average length between pages = %.3lf clicks\n", cas++,ans);
        clean();
    }
    return 0;
}
