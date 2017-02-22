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
int node,edge;
vector <int>v[1050];

void bfs()
{
    bool visited[1050];
    memset(visited,false,sizeof(visited));
    int level[1050];
    level[0]=0;
    visited[0]=true;
    queue <int>Q;
    Q.push(0);
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            int y=v[x][i];
            if(!visited[y])
            {
                Q.push(y);
                level[y]=level[x]+1;
                visited[y]=true;
            }
        }
    }
    for(int i=1;i<node;i++)
        cout<<level[i]<<endl;
}

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>node>>edge;
        int x,y;
        for(int i=0;i<edge;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs();
        for(int i=0;i<node;i++)
            v[i].clear();
        if(t)
            cout<<endl;
    }
    return 0;
}
