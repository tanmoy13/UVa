#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c,ans=1,i;
    while(scanf("%lld", &a)==1)
    {
        if(a==0)
        {
            printf("Underflow!\n");
            continue;
        }
        else if(a<0 && a%2==0)
        {
            printf("Underflow!\n");
            continue;
        }
        else if(a<0 && a%2!=0)
        {
            printf("Overflow!\n");
            continue;
        }

        for(i=a; i>0; i--)
        {
            ans*=i;
            if(i==1 && ans<10000)
            {
                printf("Underflow!\n");
                break;
            }
            else if(ans>6227020800)
            {
                printf("Overflow!\n");
                break;
            }
            else if(i==1)
            {
                printf("%lld\n", ans);
            }
        }
        ans=1;
    }
    return 0;
}
