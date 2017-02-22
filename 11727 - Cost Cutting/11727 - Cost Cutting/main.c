/*
#include <stdio.h>

int main()
{

    int i=0,n;
    long double a=0,b=0,c=0,d=0,a_1=0,a_2=0,a_3=0;
    scanf("%d", &n);
    while(n--)
    {
        i++;
        scanf("%lf %lf %lf", &a,&b,&c);

         if (a>b && a>c)
            {a_1=a;
            a_2=b;
            a_3=c;}
        else if (b>a && b>c)
            {a_1=b;
            a_2=a;
            a_3=c;}
        else
            {a_1=c;
            a_2=a;
            a_3=b;
            }
        if(a_2>a_3)
            d=a_2;
        if(a_3>a_2)
            d=a_3;

        printf("Case %d: %.0lf\n", i, d);
    }
    return 0;
}
*/
#include<stdio.h>
main()
{
    int a,b,c,t,i=1;
    scanf("%d", &t);
    while(i<=t)
    {
        scanf("%d %d %d", &a,&b,&c);
        if((a>b && a<c)||(a>c && a<b))
            printf("Case %d: %d\n", i,a);
        if((b>a && b<c)||(b>c && b<a))
            printf("Case %d: %d\n", i,b);
        if((c>a && c<b)||(c>b && c<a))
            printf("Case %d: %d\n", i,c);
        i++;
    }
    return 0;
}

