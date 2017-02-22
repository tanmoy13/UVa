#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;
long int sum (char str1[], long int k)
{
    long int sum,i;
    for(i=sum=0;i<k;i++)
        {
            if(str1[i]>='A' && str1[i]<='Z')
                sum+=str1[i]-64;
            else if(str1[i]>='a' && str1[i]<='z')
                sum+=str1[i]-96;

        }
        return sum;
}

long int sum_digit(long int a)
{
    long int ans=0,k,l;
    while(a)
    {
        l=a%10;
        ans+=l;
        a/=10;
        if(ans>=10 && a==0)
        {
            a=ans;
            ans=0;
        }
    }
    return ans;
}
int main()
{
    char str1[100],str2[100];
    int i,a,b,k,l,sum1,sum2,swap;
    double ans;
    while(gets(str1) && gets(str2))
    {
        k=strlen(str1);
        l=strlen(str2);
        sum1=sum(str1,k);
        sum2=sum(str2,l);
        a=sum_digit(sum1);
        b=sum_digit(sum2);
        if(b>a)
        {
            swap=a;
            a=b;
            b=swap;
        }
        ans=((double)b/a)*100;
        printf("%.2lf %%\n",ans);
    }
    return 0;
}
