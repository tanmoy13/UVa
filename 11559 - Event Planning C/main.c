#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int cost,participant, butget,hotel,seat,weak,ara,ans=15000000,x=0,i,j,k;
    while(scanf("%ld %ld %ld %ld",&participant,&butget,&hotel,&weak)!=EOF)
    {
        i=weak;
        k=butget;
        while(hotel--)
        {
            scanf("%ld", &cost);
            for(j=0; j<weak; j++)
            {
                scanf("%d",&seat);
                if(seat>=participant)
                {
                    x=participant*cost;
                    if(x<ans)
                        ans=x;
                }
            }
        }
        if(ans<butget)
            printf("%ld\n",ans);
        else
            printf("stay home\n");
        ans=15000000;
    }
    return 0;
}
