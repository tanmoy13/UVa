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
vector <int> node[21];
void bfs(int start, int stop)
{
    bool visited[21];
    memset(visited,false,sizeof(visited));
    int level[21]={0};
    visited[start]=true;
    level[start]=0;
    queue <int>Q;
    Q.push(start);
    while(!Q.empty())
    {
        int v=Q.front();
        Q.pop();
        for(int i=0;i<node[v].size();i++)
        {
            int u=node[v][i];
            if(!visited[u])
            {
                visited[u]=true;
                level[u]=level[v]+1;
                Q.push(u);
            }
        }
    }
    pf("%2d to %2d:%2d\n",start,stop,level[stop]);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t_case=0;
    int tt,nn,num;;
    while(sc("%d",&tt)!=EOF)
    {
        t_case++;
        while(tt--)
            {
              cin>>num;
              node[1].push_back(num);
              node[num].push_back(1);
            }
        for(int l=2; l<20; l++)
        {
            cin>>nn;
            while(nn--)
            {
              cin>>num;
              node[l].push_back(num);
              node[num].push_back(l);
            }
        }
//        for(int i=1;i<20;i++)
//        {
//            cout<<i<<"--> ";
//             for(int j=0;j<node[i].size();j++)
//                cout<<node[i][j]<<" ";
//             cout<<endl;
//        }

        int n,x,y;
        bool test=true;
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            if(test)
            {
                cout<<"Test Set #"<<t_case<<endl;
                test=false;
            }
            bfs(x,y);
        }
        cout<<endl;
        for(int i=0;i<21;i++)
            node[i].clear();
    }
    return 0;
}
