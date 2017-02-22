#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,k,ans=0,carry;
    while(scanf("%ld %ld", &n,&k) !=EOF)
    {
        if(k==1)
            continue;
        ans=n;
        while(n>=k)
        {
            carry=n/k;
            ans+=carry;
            n=carry+(n%k);
        }
        printf("%ld\n",ans);
    }
    return 0;
}
