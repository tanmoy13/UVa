#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,i,ans=1;
    while(scanf("%lld", &n) != EOF)
    {
        if(n==0)
            break;
    i=sqrt(n);
    i=i*i;
    if(n!=i)
        printf("no\n");
    else
        printf("yes\n");
    }
    return 0;
}
