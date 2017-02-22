#include <iostream>
#include<cstdio>
#include<cmath>
#define sclld(a) scanf("%lld", &a)
#define FFOR(i,x,y) for(i=x;i<y;i++)

using namespace std;
long long gcd(long long a,long long b)
{
    return(b==0?a:gcd(b,a%b));
}
int main()
{
    long long int t,i,j,k=0,l=0,n,ara[60];
    double pi;
    while(sclld(n)==1 && n>0)
    {
            FFOR(i,0,n)
            sclld(ara[i]);
            FFOR(i,0,n)
            {
                FFOR(j,i+1,n)
                {
                    l++;
                    if( ara[i]!=ara[j] && gcd(ara[i],ara[j])==1)
                        k++;
                }
            }
            if(k==0)
                printf("No estimate for this data set.\n");
            else
            {
                pi=sqrt(6.0*l/k);
                printf("%.6lf\n",pi);
            }
            pi=k=l=0;
    }
    return 0;
}
