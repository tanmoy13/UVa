#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    double a,b,c,r,s,ans;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        if(s==0)
            ans=0;
        else ans=((s-a)*(s-b)*(s-c))/s;
        r=sqrt(ans);
        printf("The radius of the round table is: %.3lf\n",r);
    }
    return 0;
}
