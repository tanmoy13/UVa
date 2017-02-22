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
#include <deque>
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
#define MAX 100010
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

/* Bits operation */

int Set(int n,int pos)  { return n = n | 1<<pos;}
bool check(int n,int pos) { return n & 1<<pos;}
int Reset(int n, int pos) { return n=n & ~(1<<pos);}

/* ---------End of Header---------0*/

ll hight[MAX],color[MAX],ans[MAX];

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int n,c;

    while(cin>>n>>c && n)
    {
        for(int i=1;i<=n;i++)
            cin>>hight[i];
        for(int i=1;i<=n;i++)
            {
                int j;
                cin>>j;
                color[i]=1<<j;
            }

        hight[0]=hight[n+1]=0;
        color[0]=color[n+1]=0;

        /* Left to Right Check */
        {
            stack<int>stk;
            stk.push(0);
            for(int i=1;i<=n;i++)
            {
                while(hight[stk.top()]>=hight[i])
                {
                    color[i]|=color[stk.top()];
                    stk.pop();
                }
                ans[i]=(i-stk.top())*hight[i];
                stk.push(i);
            }
        }

        /* Right to Left Check */
        {
            stack<int>stk;
            stk.push(n+1);
            for(int i=n;i>0;i--)
            {
                while(hight[stk.top()]>=hight[i])
                {
                    color[i]|=color[stk.top()];
                    stk.pop();
                }
                ans[i]+=(stk.top()-i)*hight[i];
                stk.push(i);
            }
        }

        for(int i=1;i<=n;i++)
            ans[i]-=hight[i];

        int ans_color=(1<<c)-1;
        ll max_ans=0;

        for(int i=1;i<=n;i++)
            if(color[i]==ans_color)
                max_ans=max(max_ans,ans[i]);

        cout<<max_ans<<endl;
    }
    return 0;
}
