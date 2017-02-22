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
bool prime_check(long long n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    vector<long int>v;
    bool prime[10000];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<10000;)
    {
        v.push_back(i);
        for(int j=i+i;j<10000;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i]==true)
                break;
    }
    v.erase(v.begin());
    long long n;
    while(cin>>n && n!=0)
    {
        long long ans,i=0;
        while(1)
        {
            ans=n-v[i];
            if(prime_check(ans))
                break;
            else
                i++;
        }
        cout<<n<<" = "<<v[i]<<" + "<<ans<<endl;
    }
    return 0;
}
