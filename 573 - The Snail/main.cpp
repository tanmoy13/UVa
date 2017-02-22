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

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h!=0)
    {
        long long day=0;
        double dis_clim=0,a;
        a= (f * u) / 100.0;
        while(1)
        {
            day++;
            dis_clim+=u;
            u-=a;
            if(u<=0)
                u=0;
            if(dis_clim>h)
                break;
            dis_clim-=d;
            if(dis_clim<0)
                break;
        }
        if(dis_clim>h)
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }
    return 0;
}
