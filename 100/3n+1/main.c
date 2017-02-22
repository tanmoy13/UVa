#include<stdio.h>
main()
{
    unsigned long int a,b,c,d,e,f,n,max;
    while(scanf(" %lu %lu", &a, &b) !=EOF)
    {
        if(a<b)
            {c=a;
             d=b;}
        else
            {c=b;
             d=a;}
        for(max=0; c<=d;c++)
        {
            n=c;
            e=1;
            while(n!=1)
            {
                if(n%2 !=0)
                    n=3*n+1;
                else
                    n/=2;
                e++;
            }
            if(e>max)
                max=e;
        }
        printf("%lu %lu %lu\n", a,b,max);
    }
    return 0;
}
