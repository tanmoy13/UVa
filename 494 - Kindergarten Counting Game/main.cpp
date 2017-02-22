#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char str[1000];
    long int i,ans,l,j,m;
    while(gets(str))
    {
        l=strlen(str);
        for(i=ans=m=0;i<l;i++)
        {
             if(str[i]<65 || str[i]>90)
                if(str[i]<'a' || str[i]>'z')
                {
                    for(j=i-1;j>=m;j--)
                    if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z'))
                    {
                        ans++;
                        break;
                    }
                    m=i;
                }

        }
        for(j=m+1;j<l;j++)
        {
          if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z'))
               {
                 ans++;
                 break;
               }
        }
        printf("%ld\n", ans);
    }
    return 0;
}
