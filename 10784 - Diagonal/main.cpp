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
    double diagonals,vertics;
    long long t_case=0,ans;
    while(cin>>diagonals && diagonals!=0)
    {
        t_case++;
        diagonals*=2.0;
        vertics=(3.0+sqrt(9.0+4.0*diagonals))/2.0;
        ans=ceil(vertics);
        cout<<"Case "<<t_case<<": "<<ans<<endl;
    }
    return 0;
}

///rule of diagonal in a poligon is (n(n-3)/2)=number of diagonals.
