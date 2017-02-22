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
    long long t,n,sum=0;
    int ara[1500];
    sc("%lld",&t);
    while(t--)
    {
        sc("%lld",&n);
        for(int i=0;i<n;i++)
            sc("%d",&ara[i]);
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(ara[j]<=ara[i])
                    sum++;
        pf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
