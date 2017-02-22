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
    string str;
    while(cin>>str && str !="0")
    {
        ll n,ans,a=0,b=0,i;
        for(i=0;i<str.length();i++)
        {
            b=str[i]-48+a*10;
            a=b%17;
        }
        if(a==0)
            cout<<"1\n";
        else
            cout<<"0\n";
        str.clear();
    }
    return 0;
}
