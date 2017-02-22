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
#define pii pair <int,int>
#define ff first
#define ss second

using namespace std;

bool grid[1000][1000];
int r,c;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
bool visited[1000][1000];

bool valid(int x, int y)
{
    if(x>-1 and x <r and y>-1 and y<c and grid[x][y] and !visited[x][y])
        return true;
    return false;
}

void bfs_2d(pii a, pii b)
{
    bool test=false;
    int level[r][c];
    level[a.ff][a.ss]=0;
    memset(visited,false,sizeof(visited));
    queue <pii>Q;
    Q.push(a);
    while(!Q.empty())
    {
        pii v=Q.front();
        Q.pop();
        int x,y;
        for(int i=0; i<4; i++)
        {
            x=v.ff+fx[i];
            y=v.ss+fy[i];
            if(valid(x,y))
            {
                level[x][y]=level[v.ff][v.ss]+1;
                visited[x][y]=true;
                pii u=make_pair(x,y);
                Q.push(u);
            }
        }
    }
    cout<<level[b.ff][b.ss]<<endl;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

    while(cin>>r>>c && (r && c))
    {
        memset(grid,true,sizeof(grid));
        int conc,rep;
        cin>>conc;
        while(conc--)
        {
            int row;
            cin>>row>>rep;
            while(rep--)
            {
                int pos;
                cin>>pos;
                grid[row][pos]=false;
            }
        }
        pii start,stop;
        cin>>start.ff>>start.ss;
        cin>>stop.ff>>stop.ss;
        bfs_2d(start,stop);
    }
    return 0;
}
