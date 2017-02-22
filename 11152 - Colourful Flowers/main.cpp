#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>
#define pi acos(0)*2

using namespace std;

int main()
{
    double a,b,c,s,sun,vio,red,R,m,n;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        m=s*(s-a)*(s-b)*(s-c);
        if(m<=0)
            m=0;
        vio=sqrt(m);
        R=(a*b*c)/(4*vio);
        sun=(pi*R*R)-(vio);
        red=pi*((s-a)*(s-b)*(s-c)/s);
        vio-=red;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,red);
    }
    return 0;
}
