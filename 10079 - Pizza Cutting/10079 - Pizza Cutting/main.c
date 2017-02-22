#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n,i,a,ans;
    while(scanf("%lf", &n))
    {
        if(n<0)
            break;
        ans=(n*n+n+2)/2;

        printf("%.0lf\n", ans);
        ans=1;
    }
    return 0;
}
