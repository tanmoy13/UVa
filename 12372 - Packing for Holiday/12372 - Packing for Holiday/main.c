#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i=0;
    scanf("%d", &n);
    while(n--)
    {
        i++;
        scanf("%d %d %d", &a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n", i);
        else
            printf("Case %d: bad\n", i);
    }
    return 0;
}
