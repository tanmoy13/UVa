
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

struct data
{
    int u,v,w;

    bool operator< (const data &p) const
    {
        return w<p.w;
    }

    data(int x, int y, int z)
    {
        u=x,v=y,w=z;
    }

};


int par[2000];

int find_par(int n)
{
    return par[n]=(par[n]==n)?n:find_par(par[n]);
}

vector<data> edge,ans;



int n,m;
int counter;

void MST()
{
    sort(all(edge));
   int cnt=0;
   counter=0;
    loop(i,SZ(edge))
    {
        int u=find_par(edge[i].u);
        int v=find_par(edge[i].v);
        counter=i+1;
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            if(cnt==n-1)
            {
                break;
            }
        }
        else
            ans.pb(edge[i]);

    }

    for(int i=counter;i<SZ(edge);i++)
        ans.pb(edge[i]);

}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    while(sff(n,m))
    {
        if(n==0 && m==0) break;
        int x,y,z;
        loop(i,m)
        {
            sfff(x,y,z);
            edge.pb(data(x,y,z));

        }

        loop(i,n+10) par[i]=i;
        MST();

        if(SZ(ans)==0)
            pf("forest\n");
        else
        {
            cout<<ans[0].w;
            for(int i=1;i<SZ(ans);i++) cout<<" "<<ans[i].w;
            cout<<endl;
        }
        edge.clear();
        ans.clear();
    }

    return 0;
}


