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

vector<int>v;
int dp[MAX][MAX];
int cap,n;
int knapsak(int indx,int cur)
{
    if(indx>=n){return 0;}
    int &rfr=dp[indx][cur];
    if(rfr!=-1) return rfr;
    int r1=0,r2=0;
    if(cur+v[indx]<=cap)
        r1=v[indx]+knapsak(indx+1,cur+v[indx]);
    r2=knapsak(indx+1,cur);
    return rfr= max(r1,r2);
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    string str;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,str);
        int l=str.length();
        int i=0,num=0,sum=0;
        n=0;
        while(i<l)
        {
            num*=10;
            if(str[i]==' ')
                {num=0,i++;continue;}
            num+=str[i]-'0';
            if(str[i+1]== ' ' || i==l-1)
                v.pb(num),sum+=num,n++;
            i++;
        }
        cap=sum/2;
        ms(dp,-1);
        int hold=knapsak(0,0);
        if(hold==(sum-hold))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        v.clear();
        str.clear();
    }
    return 0;
}
