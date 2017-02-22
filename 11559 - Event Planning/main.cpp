#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    long int participant, butget,hotel, weak,cost,seat,ans=0,tem=0;
    while(scanf("%ld %ld %ld %ld", &participant,&butget,&hotel,&weak)==3)
    {
        while(hotel--)
        {
            scanf("%ld", cost);
            while(weak--)
                {
                scanf("%ld", &seat);
                if(seat>=participant && participant*cost<=butget)
                {
                    tem=participant*cost;
                    if(tem>ans)
                        ans=tem;
                    butget-=ans;
                }
            }

        }
        if(ans>0)
            cout<<ans<<endl;
        else
            cout<<"stay home"<<endl;
        ans=butget=tem=0;
    }
    return 0;
}
