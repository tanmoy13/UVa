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

#define row 10010
#define col 3000
using namespace std;
int ara[row];
void fact()
{
    ara[0]=1;
    int factm;
    for(int i=1;i<row;i++)
    {
        factm=ara[i-1]*i;
        while(factm%10==0)
            factm/=10;
        ara[i]=factm%100000;
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    fact();
    int n,ans=0;
    while(cin>>n)
    {
        pf("%5d -> %d\n",n,ara[n]%10);
    }
    return 0;
}
