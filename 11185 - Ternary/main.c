#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b=0,c,ara[200],i;
    double ans=0;
    while(scanf("%ld",&a)!=EOF)
    {
        if(a==0)
        {
            printf("%.0lf\n",ans);
            continue;
        }
        if(a<0)
            break;
        for(i=0;a!=0;i++)
        {
            ara[i]=a%3;
            a/=3;
        }
        for(b=i-1;b>=0;b--)
        {
            printf("%ld",ara[b]);
        }
        printf("\n");
    }
    return 0;
}
