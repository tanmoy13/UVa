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
    long long a=0,b=0,c,d;
    while(cin>>str && str !="0")
    {
        for(int i=0;i<str.length();i++)
        {
            a=((b*10)+str[i]-48)/11;
            b=((b*10)+str[i]-48)%11;
        }
        if(!b)
            cout<<str<<" is a multiple of 11.\n";
        else
            cout<<str<<" is not a multiple of 11.\n";
        str.clear();
        b=a=0;
    }
    return 0;
}
