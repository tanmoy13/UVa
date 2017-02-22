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
    while(cin>>n)
    {
        long long count=1,i=1;
        while(i)
        {
            i=(i*10)+1;
            i%=n;
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
