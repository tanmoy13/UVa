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
    long long a,l,t_case=0,A;
    while(cin>>a>>l && a>0 && l>0)
    {
        A=a;
        t_case++;
        long long ans=1;
        while(a!=1)
        {
            if(a%2==0)
                a/=2;
            else
                a=3*a+1;
            if(a>l)
                break;
            ans++;
        }
        cout<<"Case "<<t_case<<": A = "<<A<<", limit = "<<l<<", number of terms = "<<ans<<endl;
    }
    return 0;
}
