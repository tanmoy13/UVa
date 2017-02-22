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

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

vector <ll>v[1000];
map <ll,ll>mp1;
map <ll,ll>mp2;

int bfs(ll start, ll TTL, ll sz)
{
    ll level[1000]= {0};
    bool visited[1000];
    memset(visited,false,sizeof(visited));
    queue <ll> Q;
    Q.push(start);
    level[start]=0;
    visited[start]=true;
    while(!Q.empty())
    {
        int p=Q.front();
        Q.pop();
        for(int i=0; i<v[p].size(); i++)
        {
            int q=v[p][i];
            if(!visited[q])
            {
                Q.push(q);
                visited[q]=true;
                level[q]=level[p]+1;
            }
        }
    }
    int count=0;
    for(int i=0; i<sz; i++)
    {
        if(i==start)
            continue;
        if(level[i]>TTL)
            count++;
    }
    return count;
}
int main()
{
    freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ll n,a,b,c,d,e,f,test=0;;
    while(cin>>n && n)
    {
        int x=0;
        while(n--)
        {
            sc("%lld %lld",&a,&b);
            if(mp1.find(a)==mp1.end())
            {
                mp1[a]=x;
                mp2[x]=a;
                x++;
            }
            if(mp1.find(b)==mp1.end())
            {
                mp1[b]=x;
                mp2[x]=b;
                x++;
            }
            int aa=mp1[a];
            int bb=mp1[b];
            v[mp1[a]].push_back(mp1[b]);
            v[mp1[b]].push_back(mp1[a]);
        }
        while(sc("%lld %lld",&e,&f))
        {
            if(e==0 && f==0)break;
            test++;
            pf("Case %lld: ",test);
            int z=bfs(mp1[e],f,x);
            cout<<z<<" nodes not reachable from node "<<e<<" with TTL = "<<f<<"."<<endl;
        }
        for(int i=0; i<x; i++)
            v[i].clear();
        mp1.clear();
        mp2.clear();
    }
    return 0;
}
