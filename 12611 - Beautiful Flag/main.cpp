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
    long long t,i,r,l,w,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r;
        l=5*r;
        w=3*r;
        a=l*.45;
        b=l-a;
        cout<<"Case "<<i<<":\n";
        cout<<"-"<<a<<" "<<w/2<<endl;
        cout<<b<<" "<<w/2<<endl;
        cout<<b<<" "<<"-"<<w/2<<endl;
        cout<<"-"<<a<<" "<<"-"<<w/2<<endl;
    }
    return 0;
}
