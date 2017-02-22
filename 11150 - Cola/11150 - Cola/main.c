#include <stdio.h>

int main()
{
    long long n,t,d,i,ans;
    while(scanf("%lld",&n)==1)
    {
        ans=n;
        t=n;
        while(t>1)
        {
            if(t==2)
            {
                ans++;
                break;
            }
            d=t%3;
            t=t/3;
            ans+=t;
            t+=d;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

/*#include <stdio.h>

int main()
{
    int n,ans=0,carry,full_btl,empty_btl;
    while(scanf("%d", &n)!= EOF)
    {
        ans=carry=n;
        while(n>=2)
        {
        full_btl=n/3;
        empty_btl=n%3;
        n=full_btl+empty_btl;
        ans+=full_btl;
        if(n==2)
            {
                ans++;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
*/
