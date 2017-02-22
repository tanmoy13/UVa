#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char str1[2000],str2[2000],ans[2000],swap_str[2000];
    bool check[2000];
    long int i,j,k,l,swap,a;
    while(gets(str1) && gets(str2))
    {
        memset(check,true,sizeof(check));
        k=strlen(str1);
        l=strlen(str2);
        if(k>l)
        {
            swap=k;
            k=l;
            l=swap;
            strcpy(swap_str,str1);
            strcpy(str1,str2);
            strcpy(str2,swap_str);
        }
        for(i=a=0;i<k;i++)
            for(j=0;j<l;j++)
        {
            if(str1[i]==str2[j] && check[j]==true)
            {
                ans[a]=str1[i];
                a++;
                check[j]=false;
                break;
            }
        }
        ans[a]='\0';
        sort(ans,ans+a);
        printf("%s\n",ans);
    }
    return 0;
}
