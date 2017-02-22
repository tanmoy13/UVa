#include <stdio.h>
void buble_sort(long int ara[],long int n);
int main()
{
    long int ara[3],n=3;
    while(scanf("%ld %ld %ld", &ara[0],&ara[1],&ara[2])!=EOF)
    {
        buble_sort(ara,n);
        if(ara[0]==0 || ara[1]==0 ||ara[2]==0)
            continue;
        else if((ara[0]*ara[0])+(ara[1]*ara[1])==(ara[2]*ara[2]))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}

void buble_sort(long int ara[],long int n)
{
    long int i,j,swap;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=swap;
            }
        }
    }
}
