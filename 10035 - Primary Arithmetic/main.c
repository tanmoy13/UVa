#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c,d,ans=0,i=0;
    long long carry;
    while(scanf("%lld %lld", &a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
        while(a!=0 || b!=0)
        {
            c=a%10;
            d=b%10;
            carry=(c+d+i);
            if(carry>=10)
            {
                ans++;
                i=1;
            }
            else
                i=0;
            a/=10;
            b/=10;
        }
        if(ans==1)
            printf("%lld carry operation.\n",ans);
        else if(ans>1)
            printf("%lld carry operations.\n",ans);
        else
            printf("No carry operation.\n");
        ans=carry=i=0;
    }
    return 0;
}
