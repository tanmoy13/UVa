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
    long long i,j,n,ans,t=0;
    while(cin>>n && n!=0)
    {
        t++;
        long long count=0;
        j=n;
        while(n--)
        {
            cin>>i;
            if(i==0)
                count++;
        }
        ans=(j-count)-count;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
