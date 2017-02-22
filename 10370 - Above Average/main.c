#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,ara[1000],i,j=0;
    float ans,avarage=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &c);
        for(i=0;i<c;i++)
        {
            scanf("%d", &ara[i]);
            avarage+=(float)(ara[i]);
        }
        avarage/=c;
        for(i=0;i<c;i++)
        {
            if(ara[i]>avarage)
                j++;
        }
        ans=(float)j/c*100;
        printf("%.3lf%%\n",ans);
        avarage=j=0;
    }
    return 0;
}
