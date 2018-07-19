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

struct point
{
    double x,y;
    point(){;}
    point(double a, double b)
    {
        x=a,y=b;
    }
};

double dist(point a, point b)
{
    return hypot(a.x-b.x,a.y-b.y);
}

double area(point a, point b, point c)
{
    return fabs(0.5*((a.x*b.y+b.x*c.y+c.x*a.y)-(a.y*b.x+b.y*c.x+c.y*a.x)));
}

int main()
{
//    freopen("in.txt","r",stdin);
//	  freopen("out.txt","w",stdout);

    point a,b,c;
    while(1)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
        if(a.x==0 && a.y==0 && b.x==0 && b.y==0 && c.x==0 && c.y==0)
            break;

        int xmini=ceil(min((a.x),min((b.x),(c.x))));
        int xmaxi=max((a.x),max((b.x),(c.x)));


        int ymini=ceil(min((a.y),min((b.y),(c.y))));
        int ymaxi=max((a.y),max((b.y),(c.y)));

        if(ymini==0) ymini++;
        if(xmini==0) xmini++;
        if(xmaxi>99) xmaxi=99;
        if(ymaxi>99) ymaxi=99;

        double ar=area(a,b,c);
        int ans=0;
        for(int i=xmini;i<=xmaxi;i++)
        {
            for(int j=ymini;j<=ymaxi;j++)
            {
                point p=point(i,j);
                double ab=area(a,b,p);
                double bc=area(a,p,c);
                double ca=area(p,b,c);
                if(fabs(ar-(ab+bc+ca))<=EPS)
                    ans++;
            }
        }
        printf("%4d\n",ans);
    }

    return 0;
}
