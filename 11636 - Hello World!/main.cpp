#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    long int a,b=0,i,ans=0;
    while(scanf("%ld", &a)==1 && a>0)
    {
        b++;
        ans=0;
        for(i=1;;i*=2)
        {
            if(i>=a)
                break;
            ans++;
        }
        printf("Case %ld: %ld\n",b,ans);
    }

    return 0;
}
