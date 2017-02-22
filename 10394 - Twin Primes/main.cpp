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
#define MAX 20000000
using namespace std;
bool prime[MAX];
long long tprime[MAX];
void sieve()
{
   long long n=sqrt(MAX);
    for(int i=3;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=MAX;j+=i)
                prime[j]=false;
        }
    }
}

void twin_prime()
{
    for(int i=3,j=1;i<=MAX;i++)
    {
        if(prime[i] && prime[i+2])
            tprime[j++]=i;
    }
}

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    memset(prime,true,sizeof(prime));
    sieve();
    twin_prime();
    long long n;
    while(cin>>n)
    {
        cout<<"("<<tprime[n]<<", "<<tprime[n]+2<<")"<<endl;
    }

    return 0;
}
