#include<bits/stdc++.h>

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
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long

using namespace std;

int data[30];
int input[30];
int n;
int dp[30];

int func(int u)
{
    int &rfr=dp[u];
    if(rfr!=-1) return rfr;
    rfr=1;
    for(int i=u+1;i<=n;i++)
    {
        if(data[input[u]]<data[input[i]])
            rfr=max(rfr,func(i)+1);
    }
    return rfr;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++)
        {
            int inp;
            cin>>inp;
            data[i]=inp;
        }
    int tmp;
    while(cin>>tmp)
    {
        input[tmp]=1;
        for(int i=2;i<=n;i++)
        {
            cin>>tmp;
            input[tmp]=i;
        }
        ms(dp,-1);
        int ans=0;

    for(int i=1;i<=n;i++)
        ans=max(ans,func(i));
    cout<<ans<<endl;
    }
    return 0;
}
