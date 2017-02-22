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
    ll t;
    sc("%lld",&t);
    while(t--)
    {
     ll e,f,c,a,ans=0;
     sc("%lld %lld %lld",&e,&f,&c);
     e+=f;
     while(e>=c)
     {
         a=e/c;
         ans+=a;
         e=(e%c)+a;
     }
     pf("%lld\n",ans);
    }
    return 0;
}
