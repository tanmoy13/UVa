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
#define MAX 100100
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
int L[1000000];
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int n;
    vector<int>v;
    int z=0;
    while(cin>>n && n!=-1)
    {
        if(z)
            cout<<endl;
        v.pb(100000);
        v.pb(n);
        int num;
        while(cin>>num &&num!=-1)
            v.pb(num);
        int sz=SZ(v);
        for(int i=0;i<=sz;i++)
            L[i]=1;
        int ans=1;
        for(int i=1;i<sz;i++)
        {
            for(int j=i+1;j<sz;j++)
                if(v[j]<v[i] && L[i]+1 > L[j])
                    ans=max(ans,++L[j]);
        }
        pf("Test #%d:\n",++z);
        cout<<"  maximum possible interceptions: "<<ans<<endl;
        v.clear();
    }
    return 0;
}
