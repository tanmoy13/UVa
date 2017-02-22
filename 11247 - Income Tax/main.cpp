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
    long long m,x;
    while(cin>>m>>x)
    {
        if(!m && !x)
            break;
        long long ans;
        if (m==1 || x==0 || x==100)
        {
            cout<<"Not found\n";
            continue;
        }
        ans=(m-1.0)*100/(100-x);
        if (( (100*(m-1)) % (100-x) ) == 0)
            ans--;
        if(ans<m)
            cout<<"Not found\n";
        else
            cout<<ans<<endl;
    }
    return 0;
}
