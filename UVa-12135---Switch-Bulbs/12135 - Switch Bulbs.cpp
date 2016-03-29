/*
     If opportunity doesn't knock, build a door.
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |S|.|S|.|R|.|A|.|S|.|A|.|M|.|K|
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    Success is how high you bounce when you hit bottom.
*/


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
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define CASE_PRINT       cout<<"Case "<<z<<":"<<endl
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


int n,m;

vector<int>v[50];
bool test=0;
bool visit[1<<17];
int dis[1<<17];

void BFS(int src)
{
    queue<int>Q;
    visit[src]=1;
    dis[src]=0;
    Q.push(src);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        loop(i,m)
        {
            int temp=u;
            loop(j,SZ(v[i]))
            temp^=(1<<v[i][j]);
            if(!visit[temp])
            {
                visit[temp]=1;
                dis[temp]=dis[u]+1;
                Q.push(temp);
            }
        }
    }
}




int main()
{

    CIN;
//    freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    TEST_CASE(t)
    {
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            v[i].clear();
            int x;
            cin>>x;
            loop(j,x)
            {
                int a;
                cin>>a;
                v[i].pb(a);
            }
        }
        ms(visit,0);
        ms(dis,-1);
        BFS(0);

        CASE_PRINT;
        int q;
        cin>>q;
        while(q--)
        {
            string str;
            cin>>str;
            reverse(all(str));
            int mask=0;
            loop(i,SZ(str))
            {
                if(str[i]=='1')
                {
                    mask=Set(mask,i);
                }

            }
            cout<<dis[mask]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
