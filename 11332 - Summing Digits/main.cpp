#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    long long num,ans=0,j,k,n;
    while(scanf("%lld", &n)==1 && n!=0)
    {
        ans=k=0;
        while(n)
        {
            k=n%10;
            ans+=k;
            n/=10;
            if(n==0 && ans>=10)
            {
                n=ans;
                ans=0;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
