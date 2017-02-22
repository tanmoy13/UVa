#include <stdio.h>
#include <stdlib.h>
unsigned long int f91(unsigned long int n)
{
    if(n>=101)
    {
        n-=10;
        return n;
    }
    else
        return f91(f91(n+11));
}
int main()
{
    unsigned long int n;
    while(scanf("%lu", &n) != EOF)
    {
        if(n==0)
         continue;
        printf("f91(%lu) = %lu\n",n,f91(n));
    }
    return 0;
}
