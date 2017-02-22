#include <bits/stdc++.h>

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define MAX 1000000

using namespace std;
vector<long long>v;
bool prime[MAX];

void seieve()
{
    for(int i=2;i<MAX;)
    {
        v.push_back(i);
        for(int j=i+i;j<MAX;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
}

long long Eulers_totient_function(long long n)
{
    long long ans=n;

    for(int i=0; v[i]*v[i]<=n;i++)
    {
       if(n%v[i]==0)
       {
           while(n%v[i]==0)
                n/=v[i];
           ans-=ans/v[i];
       }
       if(n==1)
        break;
    }
    if(n!=1)
        ans-=ans/n;
    return ans;
}

int main()
{
    memset(prime,true,sizeof(prime));
    seieve();
    long long n;
    while(cin>>n && n)
    {
        cout<<Eulers_totient_function(n)<<endl;
    }
    return 0;
}
