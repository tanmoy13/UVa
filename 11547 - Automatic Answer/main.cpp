#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    long long t,n,ans,tem;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        tem=315*n+36962;
        ans=(tem/10)%10;
        printf("%lld\n",(ans<0)?-ans:ans);
    }
    return 0;
}
