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
#define MAX 150
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
vector<I> edge[MAX],ans;
bool visited[MAX],test[MAX];
I d[MAX],cnt;

int main()
{
    //freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    I n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;
        loop(i,MAX)visited[i]=false,test[i]=false,edge[i].clear(),d[i]=0;
        ans.clear();
        I x,y;
        while(m--)
        {
            cin>>x>>y;
            edge[x].pb(y);
            d[y]++;
            //edge[y].pb(x);
        }
        cnt=0;
        while(1)
        {
            for(int i=1; i<=n; i++)
            {
                if(d[i]==0 && !visited[i])
                    {ans.pb(i);cnt++;visited[i]=true;}
            }
            if(cnt==n)break;
            for(int i=1; i<=n; i++)
                 if(d[i]==0 && !test[i])
                {
                    test[i]=true;
                    loop(j,SZ(edge[i]))
                    d[edge[i][j]]--;
                    break;
                }
        }
        cout<<ans[0];
        loop(i,SZ(ans)-1)
        cout<<" "<<ans[i+1];
        cout<<endl;
    }
    return 0;
}
