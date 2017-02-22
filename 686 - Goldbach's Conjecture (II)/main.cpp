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
vector<int>v;
bool prime[100000];
int main()
{
    memset(prime,true,sizeof(prime));
    for(int i=2; i<100000;)
    {
        v.push_back(i);
        for(int j=i+i; j<100000; j+=i)
            prime[j]=false;
        for(++i;; i++)
            if(prime[i])
                break;
    }
    long long n;
    while(cin>>n && n!=0)
    {
        long long ans=0;
        for(int j=2;j<=n/2;j++)
            if(prime[j] && prime[n-j])
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}
