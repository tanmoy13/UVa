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
    long long l,u;
    while(cin>>l>>u)
    {
        if(l==-1 && u==-1)
            break;
        long long a,b,ans;
        a=(u-l);
        if(a<0)
            a+=100;
        b=(l-u);
        if(b<0)
            b+=100;
        ans=(a<b)?a:b;
        cout<<ans<<endl;
    }
    return 0;
}
