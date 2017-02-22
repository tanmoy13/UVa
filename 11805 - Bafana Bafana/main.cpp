#include <bits/stdc++.h>

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long n,k,p,ans;
        cin>>n>>k>>p;
        ans=(k+p)%n;
        if(ans==0)
            ans=n;
        pf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
