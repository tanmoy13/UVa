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
    long long n,d,r;
    while(cin>>n>>d>>r)
    {
        if(n==0 && d==0 && r==0)
            break;
        long long mor[10000],aft[10000],pay=0,hrs=0;
        for(int i=0;i<n;i++)
        {
            ///cin>>x;
            scanf("%lld",&mor[i]);
        }
        sort(mor,mor+n);
        for(int i=0;i<n;i++)
        {
            ///cin>>x;
            scanf("%lld",&aft[i]);
        }
        sort(aft,aft+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            hrs=mor[i]+aft[i];
            if(hrs>d)
            pay+=(hrs-d)*r;
        }
            cout<<pay<<endl;
    }
    return 0;
}
