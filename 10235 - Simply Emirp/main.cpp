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

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;
int prime(ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
ll rev(ll n)
{
    ll i,r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ll n,k;
    while(cin>>n)
    {
        if(prime(n)!=1)
            pf("%lld is not prime.\n",n);
        else
        {
            k=rev(n);
            if(prime(k)==1 && k!=n)
                pf("%lld is emirp.\n",n);
            else
                pf("%lld is prime.\n",n);
        }
    }
    return 0;
}
