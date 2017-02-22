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
string str1,str2;
vector <string> v;

bool test(string s1,string s2)
{
    if(visited[s2]) return false;
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
        for(int i=0; i<SZ(v); i++)
        {
            string q=v[i];
            if(test(p,q))
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
            v.pb(str1);
        }
        while(cin>>str1>>str2)
        {
            int ans= BFS(str1,str2);
            cout<<str1<<" "<<str2<<" "<<ans<<endl;
            visited.clear();
            d.clear();
        }
        v.clear();
        if(t)
            cout<<endl;
    }
    return 0;
}
