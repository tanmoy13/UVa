#include <stdio.h>
#include <stdlib.h>

void magic_formula(long int a,long int b, long int c, long int d, long int l)
{
    long int x,function,ans=0;
    for(x=0;x<=l;x++)
    {
        function=a*x*x+b*x+c;
        if(function%d==0)
            ans++;
    }
    printf("%ld\n", ans);
}
int main()
{
    long int a,b,c,d,l;
    while(scanf("%ld %ld %ld %ld %ld", &a,&b,&c,&d,&l) !=EOF)
    {
       if(a==0 && b==0 && c==0 && d==0 && l==0)
        break;
       magic_formula(a,b,c,d,l);
    }
    return 0;
}
