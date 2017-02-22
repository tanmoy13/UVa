/*
MMP""MM""YMM   db      `7MN.   `7MF'`7MMM.     ,MMF' .g8""8q.`YMM'   `MM'
P'   MM   `7  ;MM:       MMN.    M    MMMb    dPMM .dP'    `YM.VMA   ,V
     MM      ,V^MM.      M YMb   M    M YM   ,M MM dM'      `MM VMA ,V
     MM     ,M  `MM      M  `MN. M    M  Mb  M' MM MM        MM  VMMP
     MM     AbmmmqMA     M   `MM.M    M  YM.P'  MM MM.      ,MP   MM
     MM    A'     VML    M     YMM    M  `YM'   MM `Mb.    ,dP'   MM
   .JMML..AMA.   .AMMA..JML.    YM  .JML. `'  .JMML. `"bmmd"'   .JMML.
*/


#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <map>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 20
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

bool visited[MAX][MAX];
I d[MAX][MAX];
pii fr;
I fx[]= {2,2,-2,-2,1,-1,1,-1};
I fy[]= {1,-1,1,-1,2,2,-2,-2};

map<char,I>mp;

bool test(int x,int y)
{
    if((x>0 && x<9) && (y>0 && y<9))
        return true;
    return false;
}

int BFS(pii src, pii dst)
{
    ms(visited,false);
    ms(d,10000);
    visited[src.ff][src.ss]=true;
    d[src.ff][src.ss]=0;
    if(src==dst)
        return d[src.ff][src.ss];
    queue<pii>Q;
    Q.push(src);
    while(!Q.empty())
    {
        fr=Q.front();
        Q.pop();
        I x,y;
        I cost=d[fr.ff][fr.ss]+1;
        for(int i=0; i<8; i++)
        {
            x=fr.ff+fx[i];
            y=fr.ss+fy[i];
            if(test(x,y) && d[x][y]>cost)
            {
                visited[x][y]=true;
                Q.push(make_pair(x,y));
                d[x][y]=cost;
            }
        }
    }
    return d[dst.ff][dst.ss];
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    mp['a']=1,mp['b']=2,mp['c']=3,mp['d']=4,mp['e']=5,mp['f']=6,mp['g']=7,mp['h']=8;
    pii source,destination;
    char ch1,ch2;
    I n1,n2,ans=0;
    while(cin>>ch1)
    {
        cin>>n1;
        source=make_pair(n1,mp[ch1]);
        getchar();
        cin>>ch2>>n2;
        destination=make_pair(n2,mp[ch2]);
        ans=BFS(source,destination);
        cout<<"To get from "<<ch1<<n1<<" to "<<ch2<<n2<<" takes "<<ans<<" knight moves."<<endl;
    }
    return 0;
}
