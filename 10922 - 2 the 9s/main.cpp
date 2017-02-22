#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char num[10010];
    bool test;
    long int sum,i,j,k,l,degree;
    while(scanf("%s",num)==1)
    {
        test=false;
        l=strlen(num);
        if(l==1 && num[0] =='0')
            break;
        for(i=sum=0; i<l; i++)
        {
            sum+=num[i]-48;
        }
        if(sum%9 ==0)
            test=true;
        if(test==true)
        {
            degree=1;
            while(sum>9)
            {
                degree++;
                j=sum;
                sum=0;
                while(j)
                {
                    sum+=j%10;
                    j/=10;
                }
            }
        }
        if(test==true)
            printf("%s is a multiple of 9 and has 9-degree %lld.\n", num,degree);
        else
            printf("%s is not a multiple of 9.\n",num);
    }
    return 0;
}
