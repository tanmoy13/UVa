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

ll ara[4010][4];
vector<ll>ab;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int n,t;
    sc("%d",&t);
    while(t--)
    {
        ll ans=0;
        sc("%d",&n);
        for(int i=0; i<n; i++)
        {
            sc("%lld %lld %lld %lld",&ara[i][0],&ara[i][1],&ara[i][2],&ara[i][3]);
        }
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                ab.pb(ara[i][0]+ara[j][1]);
            }
        sort(all(ab));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                int val= -(ara[i][2]+ara[j][3]);
                ans+= upper_bound(all(ab),val)-lower_bound(all(ab),val);
            }
        pf("%lld\n",ans);
        if(t)
            pf("\n");
    ab.clear();
    }
    return 0;
}



