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

vector<int>G[10005];
map<string,int>mp;
map<int,string>mp1;

int d[10005];
bool visit[10005];
int dir[10005];
int cnt=0;

int bfs(int src, int dst)
{
    queue<int>Q;
    d[src]=0;
    visit[src]=1;
    Q.push(src);
    dir[src]=src;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(u==dst) return 1;

        loop(i,SZ(G[u]))
        {
            int v=G[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                d[v]=d[u]+1;
                Q.push(v);
                dir[v]=u;
            }
        }
    }
    return -1;
}

void path_print(int a, int b)
{
   if(a==b) return;
   path_print(dir[a],b);
   cout<<mp1[dir[a]]<<" "<<mp1[a]<<endl;
}

void allclear(int n)
{
    loop(i,n)
    {
        G[i].clear();
        d[i]=visit[i]=dir[i]=0;
    }
    mp.clear();
    mp1.clear();
    cnt=0;
}

int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int n;
    bool test=0;
    while(cin>>n)
    {
        if(test) cout<<endl;
        test=1;
        string s1,s2;
        loop(i,n)
        {
            cin>>s1>>s2;
            if(mp[s1]==0)
               {
                 mp[s1]= ++cnt;
                 mp1[cnt]=s1;
               }
            if(mp[s2]==0)
                {
                    mp[s2]= ++cnt;
                    mp1[cnt]=s2;
                }
            G[mp[s1]].pb(mp[s2]);
            G[mp[s2]].pb(mp[s1]);
        }

        cin>>s1>>s2;
        if(s1==s2)
            cout<<s1<<" "<<s1<<endl;
        else if((mp[s1]==0 || mp[s2]==0))
        {
            cout<<"No route"<<endl;
        }
        else if(bfs(mp[s1],mp[s2])==-1)
            cout<<"No route"<<endl;
        else
            path_print(mp[s2],mp[s1]);

    allclear(cnt+5);

    }
    return 0;
}
