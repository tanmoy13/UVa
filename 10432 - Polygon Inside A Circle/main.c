#include <stdio.h>
#include <math.h>
int main()
{
    double r,n,ans=0,angle,pi,a,b,c,s;
    while(scanf("%lf %lf", &r,&n) !=EOF)
    {
        angle=(4*acos(0.0))/n;
        ans=(r*r*sin(angle)*n)*.5;
        printf("%.3lf\n", ans);
    }
    return 0;
}
