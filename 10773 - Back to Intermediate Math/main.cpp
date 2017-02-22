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
    long long t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long d,v,u;
        double ans;
        cin>>d>>v>>u;
//        double ans=u*u-v*v;
        if(u==0 || v==0 || v>=u)
            cout<<"can't determine"<<endl;
        else
        {
            ans=(d*1.0/sqrt(u*u-v*v)-d*1.0/u);
            printf("Case %ld: %.3lf\n",i,ans);
        }
    }
    return 0;
}
