#include <stdio.h>

int main()
{
    long long int n,t,d,i;
    while(scanf("%lld",&n)==1)
    {
        int ans=0;
        t=n;
        while(t>1)
        {
            if(t==2)
            {
                ans++;
                break;
            }
            d=n%3;
            t=n/3;
            ans=t;
            t+=d;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
