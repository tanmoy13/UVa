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
    double x,y,r,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        double rr=sqrt(x*x+y*y);
        pf("%.2lf %.2lf\n", r-rr,r+rr);
    }
    return 0;
}
