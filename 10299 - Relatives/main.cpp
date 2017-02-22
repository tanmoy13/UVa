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

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    vector<int>v;
    long long size=2000000;
    bool prime[size];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<size;)
    {
        v.push_back(i);
        for(int j=i+i;j<size;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
    long long n;
    while(cin>>n && n!=0)
    {
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        long long ans=n,lim=n;
        for(int i=0; v[i]*v[i]<=lim; i++)
        {
            if(n%v[i]==0)
            {
                ans-=(ans/v[i]);
                while(n%v[i]==0)
                    n/=v[i];
            }
        }
        if(n>1)
            ans-=(ans/n);
        cout<<ans<<endl;
    }
    return 0;
}
