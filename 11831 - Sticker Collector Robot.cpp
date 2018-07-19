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
const int fx[]= {-1,+0,+1,+0};
const int fy[]= {+0,-1,+0,+1};
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

string grid[101];

int main()
{

//    freopen("in.txt","r",stdin);
//	  freopen("out.txt","w",stdout);
    CIN;
    int n,m,s;
    while(cin>>n>>m>>s)
    {
        if(n==0 && m==0 && s==0) break;
        for(int i=0; i<n; i++) cin>>grid[i];

        int dir=-1;

        int x,y;

        for(int i=0; i<n && dir==-1; i++) for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='N')
                {
                    x=i,y=j;
                    dir=0;
                    break;
                }
                else if(grid[i][j]=='S')
                {
                    x=i,y=j;
                    dir=2;
                    break;
                }
                else if(grid[i][j]=='L')
                {
                    x=i,y=j;
                    dir=3;
                    break;
                }
                else if(grid[i][j]=='O')
                {
                    x=i,y=j;
                    dir=1;
                    break;
                }
            }

        int ans=0;
        string instruction;
        cin>>instruction;
        for(int i=0; i<s; i++)
        {
            if(instruction[i]=='D')
            {
                dir--;
                if(dir<0)
                    dir+=4;
            }
            else if(instruction[i]=='E')
            {
                dir++;
                if(dir>3)
                    dir%=4;
            }
            else if(instruction[i]=='F')
            {
                int xx=x+fx[dir];
                int yy=y+fy[dir];
                if(xx<0 || xx>=n || yy<0 || yy>=m || grid[xx][yy]=='#') continue;
                x=xx;
                y=yy;
                if(grid[x][y]=='*')
                {
                    ans++;
                    grid[x][y]='.';
                }
            }

        }
        cout<<ans<<endl;

    }

    return 0;
}
