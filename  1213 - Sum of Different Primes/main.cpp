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
#define MAX 1200
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

vector<int>v;
bool prime[MAX];
ll dp[1150][20][200];
int max_indx,num_of_coin,a,b;

ll coin_change(ll cur, int taken, int indx)
{

     if(cur>0 && taken==0) return 0;
    if(cur==0 && taken ==0 )
        return 1;
    if(v[indx]>cur) return 0;
    if(v[indx]>a) return 0;
    if(cur<0 || taken<0) return 0;
    //if(taken==b & cur!=a) return 0;

    ll &rfr=dp[cur][taken][indx];
    if(rfr!=-1) return rfr;
    int r1=0,r2=0;
    //if(cur-v[indx]>=0)
        r1=coin_change(cur-v[indx],taken-1,indx+1);
    r2=coin_change(cur,taken,indx+1);
    return rfr=r1+r2;
 }

void sieve()
{
    for(int i=2; i<MAX;)
    {
        v.pb(i);
        for(int j=i+i; j<MAX; j+=i)
            prime[j]=false;
        for(++i;; i++)
            if(prime[i])
                break;
    }
}

int val_search(int n)
{
    int l=SZ(v);
    for(int i=0; i<l; i++)
        if(v[i]<=n && v[i+1]>n)
            return i;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ms(prime,true);
    sieve();
    while(cin>>a>>b)
    {
        if(!a && !b) break;
        //max_indx=val_search(a);
        // num_of_coin=b;
//        for(int i=0; i<max_indx+2; i++)
//            for(int j=0; j<a+2; j++)
//                dp[i][j]=-1;
        ms(dp,-1);
        cout<<coin_change(a,b,0)<<endl;
    }
    return 0;
}
