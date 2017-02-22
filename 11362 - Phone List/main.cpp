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
#include <deque>
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
#define MAX 10000
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define TEST_CASE(t) for(int z=1;z<=t;z++)
#define PRINT_CASE printf("Case %d:\n",z)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

char data[20];
bool ans=0;

struct node
{
    bool endmark;
    node *ara[10];
    node()
    {
        endmark=0;
        for(int i=0; i<10; i++)
            ara[i]=NULL;
    }
}*root;

void insert(string str, int len)
{
    node *cur=root;
    for(int i=0;i<len;i++)
    {
        int indx=str[i]-'0';
        if(cur->ara[indx]==NULL)
            cur->ara[indx]=new node();
        cur=cur->ara[indx];
        if(cur->endmark)
                ans=1;
    }
    cur->endmark=1;
}


void del(node *cur)
{
    for(int i=0;i<10;i++)
    {
        if(cur->ara[i])
            del(cur->ara[i]);
    }
    delete (cur);
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    getint(t);
    vector<string>v;
    TEST_CASE(t)
    {
        root=new node();
        int n;
        getint(n);
        getchar();
        loop(i,n)
        {
            string str;
            cin>>str;
            v.pb(str);
        }
        sort(all(v));
        loop(i,n)
        {
            insert(v[i],SZ(v[i]));
        }
        if(ans)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        ans=0;
        del(root);
        v.clear();
    }
    return 0;
}
