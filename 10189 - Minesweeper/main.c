/*#include <stdio.h>

int main()
{
    int n,m,i,j,k=0;
    char ara_1[105][105],ara_2[105][105],x;
    while(scanf("%d %d", &n,&m) !=EOF)
    {
        getchar();
        k++;
        if(m==0 && n==0)
            break;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
               {
                 ara_1[i][j]=48;
               }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                {
                    scanf("%c", &ara_2[i][j]);
                }
                getchar();
        }
        printf("\n");

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ara_2[i][j]=='*')
                {
                    ara_1[i][j]='*';
                    if(ara_1[i-1][j-1] !='*' && i!=0 && j!=0)
                        ara_1[i-1][j-1]++;
                    if(ara_1[i-1][j] !='*' && i!=0)
                        ara_1[i-1][j]++;
                    if(ara_1[i-1][j+1] !='*' && i!=0)
                        ara_1[i-1][j+1]++;
                    if(ara_1[i][j-1] !='*' && j!=0)
                        ara_1[i][j-1]++;
                    if(ara_1[i][j+1] !='*')
                        ara_1[i][j+1]++;
                    if(ara_1[i+1][j-1] !='*' && j!=0)
                        ara_1[i+1][j-1]++;
                    if(ara_1[i+1][j] !='*')
                        ara_1[i+1][j]++;
                    if(ara_1[i+1][j+1] !='*')
                        ara_1[i+1][j+1]++;
                }
            }
        }
        printf("Field #%d:\n", k);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf("%c", ara_1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int n,m,i,j,k=0;
    char ara_1[105][105],ara_2[105][105],x;
    int f=0;   ///CHANGE
    while(scanf("%d %d", &n,&m) !=EOF)
    {
        getchar();   ///CHANGE
        k++;
        if(m==0 && n==0)
            break;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
               {
                 ara_1[i][j]=48;
               }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                {
                    scanf("%c", &ara_2[i][j]);
                }
                getchar();
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ara_2[i][j]=='*')
                {
                    ara_1[i][j]='*';
                    if(ara_1[i-1][j-1] !='*' && i!=0 && j!=0)
                        ara_1[i-1][j-1]++;
                    if(ara_1[i-1][j] !='*' && i!=0)
                        ara_1[i-1][j]++;
                    if(ara_1[i-1][j+1] !='*' && i!=0)
                        ara_1[i-1][j+1]++;
                    if(ara_1[i][j-1] !='*' && j!=0)
                        ara_1[i][j-1]++;
                    if(ara_1[i][j+1] !='*')
                        ara_1[i][j+1]++;
                    if(ara_1[i+1][j-1] !='*' && j!=0)
                        ara_1[i+1][j-1]++;
                    if(ara_1[i+1][j] !='*')
                        ara_1[i+1][j]++;
                    if(ara_1[i+1][j+1] !='*')
                        ara_1[i+1][j+1]++;
                }
            }
        }
        if(f>0)
            printf("\n");   ///CHANGE
        else f=2;   ///CHANGE
        printf("Field #%d:\n", k);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf("%c", ara_1[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
