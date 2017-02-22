#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <map>

using namespace std;

int main()
{
    int month,duration,a,i;
    float down,amount,b,mpmnt,a1,a2,carvalue;
    while(scanf("%d %f %f %d", &duration, &down, &amount, &month)==4 && duration>=0)
    {
        int ans=0;
        float depric[110]={0};
        mpmnt=amount/duration;
        a2=amount;
        carvalue=amount+down;
        a1=carvalue;
        for(i=0;i<month;i++)
        {
            scanf("%d %f", &a,&b);
            depric[a]=b;
        }
        for(i=0;i<110;i++)
        {
            if(depric[i]<=0)
                depric[i]=depric[i-1];
        }
        for(i=0;;i++)
        {
            a1=a1*(1-depric[i]);
            if(a2<a1)
            {
                break;
            }
            a2=a2-mpmnt;
            ans++;
        }
        if(ans==1)
        printf("%d month\n",ans);
        else
        printf("%d months\n",ans);
    }
    return 0;
}
/*
#include <cstdio>
int month[128];
double pct[128];
int main(void){
    double dp, amt;
    for(int m, z; scanf("%d %lf %lf %d", &m, &dp, &amt, &z) == 4 && m > 0; ){
        double car_value = amt + dp;
        double owing = amt;
        double monthly_payment = amt / m;
        int c_month = 0, midx = 0;
        for(int i = 0; i < z; ++i)
            scanf("%d %lf", month + i, pct + i);
        month[z] = 1 << 20;
        while(1){
            car_value *= (1 - pct[midx]);
            if(owing < car_value) break;
            owing -= monthly_payment;
            if(month[midx + 1] <= ++c_month) ++midx;
        }
        printf("%d month", c_month);
        puts(c_month != 1 ? "s" : "");
    }
    return 0;
}
*/
