#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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
#define D(x)             cerr<<#x " = "<<(x)<<endl
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

//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


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

#define mx 30
vector<int>g[mx],scc;
int low[mx],h[mx],dfsnum;
bool vis[mx],present[mx];
vector<string>ans;

void allclear()
{
    for(int i=0;i<mx;i++)
    {
        g[i].clear();
        low[i]=h[i]=vis[i]=present[i]=0;
    }
    ans.clear();
    scc.clear();
    dfsnum=0;
}

void tarjan_scc(int u)
{
    vis[u]=1;
    h[u]=low[u]=++dfsnum;
    scc.pb(u);
    for(int i=0;i<SZ(g[u]);i++)
    {
        int v=g[u][i];
        if(h[v]==0)
            tarjan_scc(v);
        if(vis[v])
            low[u]=min(low[u],low[v]);
    }
    if(low[u]==h[u])
    {
        vector<int>temp;
        while(1)
        {
            int v=scc.back();
            scc.pop_back();
            temp.pb(v);
            vis[v]=0;
            if(v==u) break;
        }
        sort(all(temp));
        string str;
        for(int i=0;i<SZ(temp);i++)
        {
            str+=('A'+temp[i]);
            if(i<SZ(temp)-1)
                str+=' ';
        }
        ans.pb(str);
    }
}

int main()
{

//    freopen("in.txt","r",stdin);
//	  freopen("out.txt","w",stdout);
    CIN;
    int n,z=0;
    while(cin>>n && n)
    {
        allclear();
        if(z) cout<<endl;
        z++;
        while(n--)
        {
            vector<int>v;
            char ch;
            for(int i=0; i<5; i++)
            {
                cin>>ch;
                v.pb(ch-'A');
                present[v[i]]=1;
            }
            cin>>ch;
            int a=ch-'A';
            for(int i=0;i<5;i++)
            {
                if(a==v[i]) continue;
                g[a].pb(v[i]);
            }
        }

        for(int i=0;i<30;i++)
        {
            if(present[i] && h[i]==0)
                tarjan_scc(i);
        }

        sort(all(ans));
        for(int i=0;i<SZ(ans);i++)
            cout<<ans[i]<<endl;

    }

    return 0;
}
