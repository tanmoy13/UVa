#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    int n,ara[55]={0},i,avg,ans,b=0;
    while(scanf("%d",&n)==1 & n!=0)
    {
        b++;
        avg=ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            avg+=ara[i];
        }
        avg/=n;
        for(i=0;i<n;i++)
        {
            if(ara[i]>avg)
                ans+=(ara[i]-avg);
        }
        printf("Set #%d\n",b);
        printf("The minimum number of moves is %d.\n\n",ans);
    }
    return 0;
}
