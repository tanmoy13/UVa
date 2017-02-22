#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    int n,i,j,k,l,m;
    char str[1000];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%s",str);
        l=strlen(str);
        k=l/n;
        for(i=1; i<=n; i++)
            for(j=(k*i)-1,m=0;; j--)
            {
                printf("%c",str[j]);
                m++;
                if(m==k)
                    break;
            }
        printf("\n");
    }
    return 0;
}
