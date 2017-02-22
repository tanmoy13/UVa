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
    long long a1,a2,a3,b1,b2,b3,c1,c2,c3,ans,i,j,k,l;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3)
    {
        j=(a2+a3+c1+c3+b1+b2);
        k=j;
        l=1;
        j=(a2+a3+b1+b3+c1+c2);
        if(j<k)
        {
            k=j;
            l=2;
        }
        j=(c2+c3+a1+a3+b1+b2);
        if(j<k)
        {
            k=j;
            l=3;
        }
        j=(c2+c3+b1+b3+a1+a2);
        if(j<k)
        {
            k=j;
            l=4;
        }
        j=(b2+b3+a1+a3+c1+c2);
        if(j<k)
        {
            k=j;
            l=5;
        }
        j=(b2+b3+c1+c3+a1+a2);
        if(j<k)
        {
            k=j;
            l=6;
        }
        if(l==1)
            cout<<"BCG "<<k<<endl;
        else if(l==2)
            cout<<"BGC "<<k<<endl;
        else if(l==3)
            cout<<"CBG "<<k<<endl;
        else if(l==4)
            cout<<"CGB "<<k<<endl;
        else if(l==5)
            cout<<"GBC "<<k<<endl;
        else if(l==6)
            cout<<"GCB "<<k<<endl;
    }
    return 0;
}
