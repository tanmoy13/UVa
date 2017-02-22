#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    long long x,t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        scanf("%lld",&x);
        if(x==0)
            break;
        long long sqr=ceil(sqrt(x));
        long long i,j;
        if(sqr%2==0)
        {
            long long temp=sqr*sqr-sqr+1;
            i=sqr;
            j=sqr;
            while(temp<x)
            {
                j--;
                temp++;
            }
            while(temp>x)
            {
                i--;
                temp--;
            }
        }
        else
        {
            long long temp=sqr*sqr-sqr+1;
            i=sqr;
            j=sqr;
            while(temp<x)
            {
                i--;
                temp++;

            }
            while(temp>x)
            {
                j--;
                temp--;
            }
        }
        printf("Case %d: %lld %lld\n",z,i,j);
    }
    return 0;
}
