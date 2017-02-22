#include <stdio.h>

void Perfection(long int n)
{
    int i,j=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            j+=i;
    }
    if(n==j)
        printf("%5ld  PERFECT\n", n);
    if(n>j)
        printf("%5ld  DEFICIENT\n", n);
    if(n<j)
        printf("%5ld  ABUNDANT\n", n);
}

int main()
{
    long int a,b=0;
    while(scanf("%ld", &a) != EOF)
    {
        if(b==0)
        {
            printf("PERFECTION OUTPUT\n");
            b++;
        }
        if(a==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        Perfection(a);
    }
    return 0;
}
