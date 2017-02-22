#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char webpage[10][100];
    int preference[10],maximum,i,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        for(i=0;i<3;i++)
        scanf("%s %d",webpage[i],&preference[i]);

        for(i=0,maximum=0;i<3;i++)
        {
            if(preference[i]>maximum)
                maximum=preference[i];
        }

        printf("Case #%d:\n",j);
        for(i=0;i<3;i++)
        {
            if(preference[i]==maximum)
                printf("%s\n",webpage[i]);
        }
    }
    return 0;
}
