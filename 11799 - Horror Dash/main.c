#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,a,ans=0,i=0;
    scanf("%d", &t);
    while(t--)
    {
        i++;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &a);
            if(a>ans)
                ans=a;
        }
        printf("Case %d: %d\n", i,ans);
        ans=0;
    }
    return 0;
}
