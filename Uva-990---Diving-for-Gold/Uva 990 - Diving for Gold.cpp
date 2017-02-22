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

int t,w,n;
int d[40],v[40];

int dp[40][1100];
int path[40][1100];

int func(int idx, int air)
{
    if(idx>=n) return 0;

    int &ret=dp[idx][air];
    if(ret!=-1) return ret;

    int p=0,q=0;

    if((air+(3*w*d[idx]))<=t)
        p=v[idx]+func(idx+1,air+(3*w*d[idx]));
    q=func(idx+1,air);

    if(p>q) path[idx][air]=1;
    else path[idx][air]=2;

    return ret=max(p,q);
}

vector<int>ans;

int path_print(int idx, int air)
{
    if(path[idx][air]==-1) return 0;

    if(path[idx][air]==1)
    {
        ans.pb(idx);
        return 1+path_print(idx+1,air+(3*w*d[idx]));
    }
    else
        return path_print(idx+1,air);
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    bool test=0;

    while(sff(t,w)==2)
    {
        if(test==1) pf("\n");
        test=1;
        sf(n);
        loop(i,n) sff(d[i],v[i]);
        ms(dp,-1);
        ms(path,-1);
        int profit=func(0,0);

        pf("%d\n",profit);
        pf("%d\n",path_print(0,0));
        loop(i,SZ(ans))
        pf("%d %d\n",d[ans[i]],v[ans[i]]);
        ans.clear();
    }

    return 0;
}
