#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,i,c,n,ans=0;
    while(scanf("%lf %lf", &a,&b) !=EOF)
    {
        if(a==0)
            continue;
        for(i=a;i<=b;i++)
        {
            n=(int)(sqrt(i));
            c=sqrt(i);
            if(c-n == 0)
                ans++;
        }
        printf("%.0lf\n", ans);
        ans=0;
    }
    return 0;
}
