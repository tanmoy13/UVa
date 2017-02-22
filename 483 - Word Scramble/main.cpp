#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    int i,j,k,l;
    char str[10000];
    while(gets(str))
    {
        l=strlen(str);
        k=-1;
        for(i=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                for(j=i-1; j>k; j--)
                    printf("%c",str[j]);
                printf(" ");
                k=i;
            }
        }
        for(i=l-1; i>k; i--)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
