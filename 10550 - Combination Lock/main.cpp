#include <iostream>
#include<cstdio>

using namespace std;
int main()
{
    long long int initial,c1,c2,c3,ans,a,b,c;
    while(scanf("%lld %lld %lld %lld", &initial,&c1,&c2,&c3)==4)
    {
        if(initial ==0 && c1==0 && c2==0 && c3==0)
            break;
            a=((c1-initial)>0)?(40-c1+initial):-(c1-initial);
            b=((c2-c1)>=0)?(c2-c1):40+(c2-c1);
            c=((c3-c2)>0)?(40-c3+c2):-(c3-c2);
        ans=1080+(a+b+c)*9;
        printf("%lld\n",ans);
        ans=0;
    }
    return 0;
}
