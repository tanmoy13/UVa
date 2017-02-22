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
long long m;
//long long big_mod(long long b,long long p)
//{
//    if(p==0) return 1;
//    if(p%2==0)
//    {
//        long long ret=big_mod(b,p/2);
//         return ((ret%m)*(ret%m))%m;
//    }
//    else
//    return ((b%m)*(big_mod(b,p-1)%m))%m;
//}
int bigmod(long long b,long long p,long long m )
{
    long long r=1;
    while(p>0)
    {
        if(p%2)
            r=(r*b)%m;
        p/=2;
        b=(b*b)%m;
    }
    return r;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long a,b;
    while(cin>>a>>b>>m)
    {
        cout<<bigmod(a,b,m)<<endl;
    }
    return 0;
}
