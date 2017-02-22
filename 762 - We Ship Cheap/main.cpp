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
#define MAX 2050
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

vector<I> v[MAX],ans;
map<string,I>mp1;
map<I,string>mp2;
I parent[MAX];
bool visited[MAX];

int find_parent(int r)
{
    ans.pb(r);
    I s=parent[r];
    if(parent[r]==r)
        return r;
    find_parent(parent[r]);
}

void BFS(int source)
{
    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    visited[source]=true;
    parent[source]=source;
    queue<I>Q;
    Q.push(source);

    while(!Q.empty())
    {
        I x=Q.front();
        Q.pop();
        for(int i=0; i<v[x].size(); i++)
        {
            I y=v[x][i];
            if(!visited[y])
            {
                visited[y]=true;
                Q.push(y);
                parent[y]=x;
            }
        }
    }

}


int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    I n;
    string str1,str2;
    bool newline=false;
    while(getint(n)==1)
    {
        int x=1;
        for(int i=0; i<n; i++)
        {
            cin>>str1>>str2;
            if(mp1[str1]==0)
            {
                mp1[str1]=x;
                mp2[x]=str1;
                x++;
            }
            if(mp1[str2]==0)
            {
                mp1[str2]=x;
                mp2[x]=str2;
                x++;
            }
            v[mp1[str1]].pb(mp1[str2]);
            v[mp1[str2]].pb(mp1[str1]);
        }
        cin>>str1>>str2;
        I p=mp1[str1], q=mp1[str2];
        BFS(p);
        if(newline)
        {
            cout<<endl;
        }
        newline=true;
        if(!visited[q] || !mp1[str1] || !mp1[str2])
            {cout<<"No route"<<endl;}
        else if(parent[q]==q)
            cout<<str2<<" "<<str2<<endl;
        else
        {
            find_parent(q);
            reverse(all(ans));
            for(int i=0; i<ans.size()-1; i++)
            {
                cout<<mp2[ans[i]]<<" "<<mp2[ans[i+1]];
                if(i!=ans.size()-1)
                    cout<<endl;
            }
        }
        for(int i=0; i<mp1.size()+2; i++)
                v[i].clear();
            mp1.clear();
            mp2.clear();
            ans.clear();
    }
    return 0;
}

