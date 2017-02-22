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
#define MAX 100
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int n,k,m;
    vector<int>v;
    while(cin>>n>>k>>m && n && k && m)
    {
        loop(i,n)
        v.pb(i+1);
        int i=-1,j=n,p,x,y;
        while(SZ(v))
        {
            x=y=0;
            p=SZ(v)-1;
            i+=k;
            j-=m;
            i=(i>p)?(i-p-1):i;
            j=(j<0)?(j+p):j;
            if(i==j)
                pf("%3d,",v[i]),x=v[i],y=v[j];
            else
                pf("%3d%3d,",v[i],v[j]),x=v[i],y=v[j];
             for(int a=0; a<SZ(v); a++)
                 if(v[a]==x)
                {
                    v.erase(v.begin()+a);
                    break;
                }
            for(int a=0; a<SZ(v); a++)
                if(v[a]==y)
                {
                    v.erase(v.begin()+a);
                    break;
                }
            i--;
            if(i<j)
            j--;
            if(j<i)
                i--;
//            loop(zz,SZ(v))
//                cout<<v[zz]<<" ";
//            cout<<endl;
        }
    }
    return 0;
}
