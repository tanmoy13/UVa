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
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d: ",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long

using namespace std;


//map <string,int> mp;
map <string,bool> visited;
map <string,int> d;
map< string,vector<string> >graph;
string str1;
vector <string> v[15];

bool test(string s1,string s2)
{
    int cnt=0;
    loop(i,SZ(s1))
    {
        if(s1[i]!=s2[i])
            cnt++;
        if(cnt==2) return false;
    }
    return true;
}

int BFS(string str1, string str2)
{
    visited[str1]=1;
    queue<string>Q;
    d[str1]=0;
    Q.push(str1);
    while(!Q.empty())
    {
        string p=Q.front();
        Q.pop();
        if(p==str2) return d[str2];
        for(int i=0; i<SZ(graph[p]); i++)
        {
            string q=graph[p][i];
            if(visited[q]==0)
            {
                visited[q]=1;
                d[q]=d[p]+1;
                Q.push(q);
            }
        }
    }
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    char c;
    sf(t);
    while(t--)
    {
        while(cin>>str1 && str1!="*")
        {
            int x=SZ(str1);
            v[x].pb(str1);
            loop(i,SZ(v[x]))
            {
                string temp=v[x][i];
                if(test(str1,temp))
                {
                    graph[str1].pb(temp);
                    graph[temp].pb(str1);
                }
            }
        }
        getchar();
        string ss1,ss2,str2;
        while(1)
        {
            getline(cin,str2);
            if(str2=="") break;
            bool test=0;
            int xx=str2.size();
            loop(i,xx)
            {
                if(str2[i]==' ') {test=1;continue;}
                if(!test) ss1+=str2[i];
                else ss2+=str2[i];
            }
            int ans= BFS(ss1,ss2);
            cout<<ss1<<" "<<ss2<<" "<<ans<<endl;
            visited.clear();
            d.clear();
            ss1.clear();
            ss2.clear();
            str2.clear();
        }
        if(t)
            cout<<endl;
    }
    return 0;
}
