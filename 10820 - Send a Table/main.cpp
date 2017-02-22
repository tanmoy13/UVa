#include <bits/stdc++.h>

#define MAX 50050

using namespace std;
vector<int>v;
bool prime[MAX];

int phi[50070];

void Euler_totient_function()
{
    for(int i=0; i<=MAX; i++)
        phi[i]=i;
    for(int i=2; i<=MAX; i++)
    {
        int l=i;
        if(phi[l]==l)
        {
            for(int k=l; k<=MAX; k+=l)
                phi[k]-=(phi[k]/l);
        }
    }
}

int main()
{
    memset(prime,true,sizeof(prime));
    seieve();
    Euler_totient_function();
    long long n,ans;
    while(cin>>n && n)
    {
        long long ans=0;
        for(int i=1; i<=n; i++)
            ans+=phi[i];
        ans=(ans*2)-1;
        cout<<ans<<endl;
    }
    return 0;

//for(int i=0;i<v.size();i++)
//    cout<<v[i]<<" ";
}
