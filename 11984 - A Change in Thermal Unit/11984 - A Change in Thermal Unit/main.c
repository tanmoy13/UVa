#include <stdio.h>

int main()
{
    int n,c,d,i;
    double ans,F;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d", &c,&d);
        F=(c/(double)5)*9+32;
        ans=((((F+d)-32)/9)*5);
        printf("Case %d: %.2lf\n", i,ans);
    }
    return 0;
}
