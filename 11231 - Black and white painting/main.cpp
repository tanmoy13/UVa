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
    ll n,m,c;
    while(cin>>n>>m>>c)
    {
        if(n==0 && m==0 && c==0)
            break;
        ll ans;
        ans=((n-7)*(m-7))/2;
        if(((n-7)*(m-7))%2!=0 && c==1)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
