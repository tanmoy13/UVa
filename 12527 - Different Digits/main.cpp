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
    long long n,m;
    while(cin>>n>>m)
    {
        long long ans=0,k,j=0;
        set<int>num;
        for(int i=n; i<=m; i++)
        {
            k=i;
            j=0;
            num.clear();
            while(k)
            {
                num.insert(k%10);
                k/=10;
                j++;
            }
            if(num.size()==j)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
