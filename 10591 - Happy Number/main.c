#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b=0,c,d,t,i,j,ans=0;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &a);
        d=a;
        while(d !=0)
        {
            j=d%10;
            b=b+j*j;
            d/=10;
        }
        while(b>=10)
        {
            ans=0;
            while(b !=0)
            {
                c=b%10;
                ans=ans+c*c;
                b/=10;
            }
            b=ans;
        }
        if(b==1)
            printf("Case #%lld: %lld is a Happy number.\n", i,a);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n", i,a);
        b=0;
    }
    return 0;
}
