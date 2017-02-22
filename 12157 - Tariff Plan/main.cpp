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
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long t,n,ttm,a,b,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long mile=0,juice=0;
        cin>>n;
        while(n--)
        {
            scanf("%lld",&ttm);
            a=(ttm/30)+1;
            mile+=a*10;
            a=(ttm/60)+1;
            juice+=a*15;
        }
        if(mile==juice)
            cout<<"Case "<<i<<": Mile Juice "<<juice<<endl;
        else if(juice<mile)
            cout<<"Case "<<i<<": Juice "<<juice<<endl;
        else
            cout<<"Case "<<i<<": Mile "<<mile<<endl;
    }

    return 0;
}
