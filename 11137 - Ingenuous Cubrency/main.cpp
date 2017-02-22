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

ull n;
ull dp[25][10100];
vector<ull>v;

ull coin_change(ull indx, ull cur)
{
    if(indx>=21)
    {
       if(cur==0){return (ull)1;}
        return 0;
    }
    if(cur<0) return (ull)0;
    if(cur==0){return (ull)1;}
    ull &rfr=dp[indx][cur];
    if(rfr!=9999999999999) return rfr;
    ull r1=0, r2=0;
    if(cur-v[indx]>=0) r1=coin_change(indx,cur-v[indx]);
    r2=coin_change(indx+1,cur);
    rfr=r1+r2;
    return rfr;
}

ull cube(int n) {return (ull)n*n*n;}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    for(int i=1; i<=21; i++)
        v.pb(cube(i));
    ms(dp,9999999999999);
    //cout<<v[19]<<endl;
    while(cin>>n)
    {
       // ms(dp,-1);
      // cnt=0;
        cout<<coin_change(0,n)<<endl;
    }
    return 0;
}
