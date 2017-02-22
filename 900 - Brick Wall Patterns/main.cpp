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
long long ara[60]={1,1};
void fib()
{
    for(int i=2;i<=55;i++)
        ara[i]=ara[i-1]+ara[i-2];
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    fib();
    int n;
    while(cin>>n and n)
    {
        cout<<ara[n]<<endl;
    }
    return 0;
}
