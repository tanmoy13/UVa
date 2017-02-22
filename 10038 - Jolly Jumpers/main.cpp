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
    long long n;
    set <int> test;
    while(cin>>n)
    {
        bool jolly=true;
        long long ara[100000],j;
        for(int i=0;i<n;i++)
            cin>>ara[i];
        for(int i=0;i<n-1;i++)
        {
            test.insert(abs(ara[i+1]-ara[i]));
        }
        if(test.size() != n-1)
            jolly=false;
        if(test.count(0)>0)
            jolly=false;
        if(test.upper_bound(n-1)!=test.end())
            jolly=false;
        if(jolly)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";
        test.clear();
    }
    return 0;
}

