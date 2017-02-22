#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
    char num[200];
    long int i,j,k,l,ans=0;
    while(gets(num) != EOF)
    {
        j=l=strlen(num);
        if(j==1 && num[0]==48)
            break;
        for(i=0;i<j;i++)
        {
            k=num[i]-48;
            ans+=k*(pow(2,l)-1);
            l--;
        }
        printf("%ld\n",ans);
        ans=0;
    }
    return 0;
}
