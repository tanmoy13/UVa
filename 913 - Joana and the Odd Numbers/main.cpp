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

using namespace std;

int main()
{
    long long n,m;
    while(scanf("%lld",&n)==1)
    {
        m=(n+1)/2;
        m=((m*m)*2)-1;
        printf("%lld\n",3*m-6);
    }
    return 0;
}
