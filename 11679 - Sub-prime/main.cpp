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
    long long b,n;
    while(cin>>b>>n &&b!=0 &&n!=0)
    {
        long long money[1000]={0},d,e,f;
        bool test=true;
        for(int i=0;i<b;i++)
            cin>>money[i];
        for(int i=0;i<n;i++)
        {
            cin>>d>>e>>f;
            money[d-1]-=f;
            money[e-1]+=f;
        }
        sort(money,money+b);
        if(money[0]<0)
            test=false;
        if(test)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
