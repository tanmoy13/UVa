/*
         +-+ +-+ +-+
         |R| |.| |S|
         +-+ +-+ +-+
*/
 
#include <bits/stdc++.h>
 
#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             10000
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sff(a,b)        scanf("%d %d",&a,&b)
#define sffl(a,b)       scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d: ",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long
 
using namespace std;
 
 
/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/
 
/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/
 
vector<int>v;
int dp[100005];
 
int LIS(int u)
{
    int &ret=dp[u];
 
    if(ret!=-1) return ret;
 
    int maxi=0;
 
    for(int i=u+1;i<SZ(v);i++)
    {
        if(v[i]<=v[u])
        {
            maxi=max(maxi,LIS(i));
        }
    }
    return ret=1+maxi;
}
 
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int a;
    int z=0;
    while(sf(a) && a!=-1)
    {
        if(z) pf("\n");
        v.pb(a);
        while(sf(a) && a!=-1)
        {
            v.pb(a);
        }
        ms(dp,-1);
        int ans=0;
 
        for(int i=0;i<SZ(v);i++)
            ans=max(ans,LIS(i));
        pf("Test #%d:\n",++z);
        pf("  maximum possible interceptions: %d\n",ans);
        v.clear();
    }
    return 0;
}
