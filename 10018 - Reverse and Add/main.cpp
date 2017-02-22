#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;
long long reverse(long long n)
{
    long long otp=0,l;
    while(n)
    {
      l=n%10;
      otp=(otp*10)+l;
      n/=10;
    }
    return otp;
}
int main()
{
    long long a,b,i,j,k,ans,t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld",&a);
        for(i=1;;i++)
        {
            b=reverse(a);
            if(a==b)
                break;
            k=a+b;
            a=k;
        }
        printf("%lld %lld\n", i-1,a);
    }
    return 0;
}
