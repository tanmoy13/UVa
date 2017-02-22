#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b,n;
    while(scanf("%ld", &n) != EOF)
    {
    while(n--)
    {
        scanf("%ld %ld", &a,&b);
        if(b%a==0)
            printf("%ld %ld\n",a,b);
        else
            printf("-1\n");
    }
    }
    return 0;
}
