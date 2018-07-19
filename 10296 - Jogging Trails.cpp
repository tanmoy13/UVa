#include <bits/stdc++.h>

#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define sc               scanf
#define pf               printf
#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define pb(a)            push_back(a)
#define MP               make_pair
#define db               double
#define ll               long long
#define EPS              10E-10
#define ff               first
#define ss               second
#define sqr(x)           (x)*(x)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define VI               vector <int>
#define DBG              pf("Hi\n")
#define MOD              1000000007
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define LINE_PRINT_CASE  printf("Case %d:\n",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))

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
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
/*------------------------------------------------*/

ll g[16][16];
int degree[16];
ll dp[1<<16];
int n,m;

void floyed_warshal()
{
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(g[i][j]>g[i][k]+g[k][j])
                    g[i][j]=g[i][k]+g[k][j];
            }
}

ll func(int mask)
{
    if(mask==0) return 0;
    ll &ret=dp[mask];
    if(ret!=-1) return ret;
    int pos=0;
    for(int i=0; i<n; i++)
        if(check(mask,i))
        {
            pos=i;
            break;
        }
    ret=INT_MAX;
    for(int i=pos+1;i<n;i++)
    {
        if(check(mask,i))
        {
            int temp_mask=mask;
            temp_mask=reset(temp_mask,pos);
            temp_mask=reset(temp_mask,i);
            ret=min(ret,g[pos][i]+func(temp_mask));
        }
    }
    return ret;
}

int main()
{

//    freopen("in.txt","r",stdin);
//	  freopen("out.txt","w",stdout);

    int t;
//    sf(t);
//    TEST_CASE(t)
    while(sf(n) && n)
    {
        sf(m);
//        sff(n,m);
        ll ans=0;
        for(int i=0; i<=n; i++) for(int j=0; j<=n; j++) g[i][j]=INT_MAX;
        ms(degree,0);
        for(int i=0; i<m; i++)
        {
            ll a,b,c;
            sfffl(a,b,c);
            a--;
            b--;
            g[a][b]=min(g[a][b],c);
            g[b][a]=min(g[b][a],c);
            degree[a]++;
            degree[b]++;
            ans+=c;
        }

        floyed_warshal();

        int mask=0;

        for(int i=0; i<n; i++)
            if(degree[i]%2)
                mask=Set(mask,i);


//        PRINT_CASE;
        ms(dp,-1);
        printf("%lld\n",ans+func(mask));
    }

    return 0;
}
