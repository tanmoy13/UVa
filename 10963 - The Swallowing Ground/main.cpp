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
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        bool test1=true,test2=true;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            if(test2)
            {d=a-b;;
            test2=false;
            }
            else
            {
                c=a-b;
                if(c!=d)
                test1=false;
            }
        }
        if(test1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
