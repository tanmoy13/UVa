#include <iostream>
#include <cstdio>
#include<cmath>
#define PI acos(-1)

using namespace std;

int main()
{
    int t;
    double l,b,r,area1,area2;
    while(scanf("%d",&t)==1)
    while(t--)
    {
        scanf("%lf", &l);
        {
        b=l*6/10;
        r=l/5;
        area1=PI*r*r;
        area2=(l*b)-area1;
        printf("%.2lf %.2lf\n", area1,area2);
        b=r=area1=area2=0;
        }
    }
    return 0;
}
