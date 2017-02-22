#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int n,i=0,j,k;
    while(scanf("%lu", &n) !=EOF)
    {
        while(n>0)
        {
            if(n<=100)
            {
                n+=11;
                i++;
            }
            else
            {
                n-=10;
                i++;
            }
        }
        printf("%lu\n", i);
    }
    return 0;
}
