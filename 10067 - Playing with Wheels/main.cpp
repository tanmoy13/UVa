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
    int a,b,c,d;

    data operator= (data &x) const
    {
        data temp;
        temp.a=x.a;
        temp.b=x.b;
        temp.c=x.c;
        temp.d=x.d;
        return temp;
    }
};

inline int convert(data x)
{
    return x.a*1000+x.b*100+x.c*10+x.d;
}

inline bool same(data x, data y)
{
    if(x.a==y.a && x.b==y.b && x.c==y.c && x.d== y.d) return 1;
    return 0;
}


bool visited[100005];

int dis[100005];

int bfs(data src, data dst)
{

    dis[convert(src)]=0;
    dis[convert(dst)]=0;
    queue<data>Q;
    if(!visited[convert(src)])
    Q.push(src);
    visited[convert(src)]=1;
    while(!Q.empty())
    {
        data u = Q.front();
        Q.pop();
        if(same(u,dst)) return dis[convert(dst)];

        int a=convert(u),b;

        {
            data v1=u;
            v1.a++;

            if(v1.a>9) v1.a=0;

            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }

            v1.a-=2;

            if(v1.a<0) v1.a+=10;


            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }
        }
        {

            data v1=u;

            v1.b++;

            if(v1.b>9) v1.b=0;

            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }

            v1.b-=2;

            if(v1.b<0) v1.b+=10;


            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }
        }
        {
            data v1=u;

            v1.c++;

            if(v1.c>9) v1.c=0;

            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }

            v1.c-=2;

            if(v1.c<0) v1.c+=10;


            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }
        }

        {
            data v1=u;

            v1.d++;

            if(v1.d>9) v1.d=0;

            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }

            v1.d-=2;

            if(v1.d<0) v1.d+=10;


            b=convert(v1);

            if(!visited[b])
            {
                visited[b]=1;
                dis[b]=dis[a]+1;
                Q.push(v1);
            }
        }

    }

    if(dis[convert(dst)]==0) return -1;
}

int main()
{
//    CIN;
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int t;
    sf(t);
    TEST_CASE(t)
    {
        data src,dst;
        cin>>src.a>>src.b>>src.c>>src.d;
        cin>>dst.a>>dst.b>>dst.c>>dst.d;

        fill(visited,visited+10005,0);
        int n;
        cin>>n;
        loop(i,n)
        {
            data x;
            cin>>x.a>>x.b>>x.c>>x.d;
            visited[convert(x)]=1;
        }

        cout<<bfs(src,dst)<<endl;

    }

    return 0;
}
