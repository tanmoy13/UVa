/*
User ID: turing_13
Problem Link: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=83
*/
 
#include <bits/stdc++.h>
 
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
#define MAX 30500
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,a) for(int i=0;i<a;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int
 
using namespace std;
 
int coins[11]= {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
unsigned long long dp[30500];
 
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int a,b;
    dp[0]=1;
    for(int i=0;i<11;i++)
        for(int j=coins[i];j<MAX;j++)
            dp[j]+=dp[j-coins[i]];
    while(sc("%d.%d",&a,&b))
    {
        int amount=a*100+b;
        if(amount==0)
            break;
        pf("%3d.%d%d%17llu\n",a,b/10,b%10,dp[amount]);
    }
    return 0;
}
