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

int dp[10500];
bool visit[10500];
int n,m,t;
int maxi=100000000;

void func(int u)
{
    if(visit[u]) return;
    visit[u]=1;
    if(u>=t)
    {
        return;
    }
    func(u+n);
    func(u+m);
}


int find_ans(int u)
{
    if(u==0) return 0;
    if(u<0) return -10000000;
    if(dp[u]!=-1) return dp[u];

    int p=0,q=0;

    p=1+find_ans(u-n);
    q=1+find_ans(u-m);
    return dp[u]=max(p,q);

}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);


    while(cin>>n>>m>>t)
    {

        if(n==1 || m==1)
        {
            cout<<t<<endl;
            continue;
        }
        if(n>t && m>t)
        {
            cout<<0<<" "<<t<<endl;
            continue;
        }

        ms(dp,-1);
        ms(visit,0);

        func(0);

        if(visit[t])
        {
            cout<<find_ans(t)<<endl;
        }
        else
        {
            int x=t;
            while(--x)
            {
                if(visit[x])
                {
                    cout<<find_ans(x)<<" "<<t-x<<endl;
                    break;
                }
            }
        }


    }

    return 0;
}


