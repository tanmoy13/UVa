#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    long int t,n,a=1,ans=0,i=0,j,k=0,ara[100];
    while(scanf("%ld", &t)==1)
    {
        k++;
        for(j=0; j<t; j++)
        {
            scanf("%ld", &ara[j]);
        }
        for(i=0; i<t; i++)
        {
            a=1;
            for(j=i; j<t && a; j++)
            {

                a*=ara[j];
                if(a>ans)
                    ans=a;
            }
        }
        printf("Case #%ld: The maximum product is %ld.\n",k,ans);
        printf("\n");
        ans=0;
    }
    return 0;
}
