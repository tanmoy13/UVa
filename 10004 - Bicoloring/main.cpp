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
#define MAX 100
#define SZ(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int


using namespace std;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int n;
    while(cin>>n && n)
    {
        vector<int>v[10000];
        int color[10000];
        memset(color,-1,sizeof(color));
        int l,x,y;
        cin>>l;
        while(l--)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        queue<int>Q;
        Q.push(0);
        color[0]=0;
        int f=0;
        while(!Q.empty())
        {
            int p=Q.front();
            Q.pop();
            int sz=v[p].size();
            for(int i=0; i<sz; i++)
            {
                int q=v[p][i];
                if(color[q]==-1)
                {
                    if(color[p]==0)
                        color[q]=1;
                    else
                        color[q]=0;
                    Q.push(q);
                }
                else if(color[p]==color[q])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}
