#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    long long t,n,m,ans;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n,&m);
        ans=(n/3)*(m/3);
        printf("%lld\n",ans);
    }
    return 0;
}
