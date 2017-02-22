#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age[10],t,n,i,j;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d", &n);
        for(j=0;j<n;j++)
            scanf("%d", &age[j]);
        printf("Case %d: %d\n", i,age[(n/2)]);
    }
    return 0;
}
