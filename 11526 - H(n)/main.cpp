#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int H(int n)
{
    long long int res = 0,a,b,i;
    a=sqrt(n);
    for(i=1;i <=a; i++ )
    {
        res = (res + n/i);
    }
    return res*2-a*a;
}
int main()
{
    long long int n,ans,t;
    scanf("%lld", &t);
    while(t--)
    {
    scanf("%lld", &n);
    printf("%lld\n", H(n));
    }
    return 0;
}
