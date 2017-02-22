#include <stdio.h>

int main()
{
    long int n,i,j,k,side[3],swap;
    while(scanf("%ld", &n)!= EOF)
    {
    for(i=1; i<=n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%ld",&side[j]);
        }
        for(j=0; j<3-1; j++)
        {
            for(k=0; k<3-j-1; k++)
            {
                if(side[k]>side[k+1])
                {
                    swap=side[k];
                    side[k]=side[k+1];
                    side[k+1]=swap;
                }
            }
        }
        if(side[0]<=0)
            printf("Case %ld: Invalid\n", i);
        else if(side[0]+side[1]<=side[2])
            printf("Case %d: Invalid\n", i);
        else if(side[0]==side[1] && side[1]==side[2])
            printf("Case %d: Equilateral\n", i);
        else if(side[0]==side[1] || side[1]==side[2])
            printf("Case %d: Isosceles\n", i);
        else
            printf("Case %d: Scalene\n", i);
    }
    }
    return 0;
}
