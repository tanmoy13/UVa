#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    long long t,n,a,b,i,j,k,s,db1[20]={0},hb[20]={0};
    while(scanf("%lld", &t)==1)
    {
        while(t--)
        {
            scanf("%lld",&n);
            s=n;
            a=b=0;
            for(i=a=0;s;i++)
            {
                j=s%2;
                if(j==1)
                    a++;
                s/=2;
            }
            s=n;
            while(s)
            {
                k=s%10;
                s/=10;
                for(i=0;k;i++)
            {
                j=k%2;
                if(j==1)
                    b++;
                k/=2;
            }
            }
            printf("%lld %lld\n",a,b);
        }
    }
    return 0;
}
