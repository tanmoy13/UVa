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

map <int,int>mp;
void Digit_count(int n)
{
    n++;
    int a,b;
    for(int i=1;i<n;i++)
    {
        b=i;
        while(b)
        {
            a=b%10;
            b/=10;
            mp[a]++;
        }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int t_case,n;
    cin>>t_case;
    while(t_case--)
    {
        cin>>n;
        Digit_count(n);
        pf("%d %d %d %d %d %d %d %d %d %d\n",mp[0],mp[1],mp[2],mp[3],mp[4],mp[5],mp[6],mp[7],mp[8],mp[9]);
        mp.clear();
    }
    return 0;
}
