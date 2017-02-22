#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    long long a,b,ans;
    double n,m;
    while(scanf("%lld %lld", &n,&m)==2)
    {
        a=2*n-3;
        b=pow(2.0,m);
        ans=a%b;
        printf("%lld\n",ans);
    }
    return 0;
}
