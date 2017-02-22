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
#define MAX 504
using namespace std;

int func(int n)
{
    int G=0;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            G+= __gcd(i,j);

    return G;
}

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int n;
    while(cin>>n && n)
        cout<<func(n)<<endl;
    return 0;
}
