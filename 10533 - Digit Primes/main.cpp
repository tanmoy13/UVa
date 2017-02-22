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
long long degit_sume(long long);
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long i,j,c;
    vector <long long>degit_prime;
    bool prime[1000100];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2;i<=1000000;)
    {

        for(j=i+i;j<=1000000;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
    for(i=0;i<1000000;i++)
        degit_prime.push_back(0);
    for(i=1;i<=1000000;i++)
    {
        degit_prime[i]=degit_prime[i-1];
        if(prime[i])
            {
                c=degit_sume(i);
                if(prime[c])
                  degit_prime[i]++;
            }
    }
    long long test_case;
    scanf("%lld",&test_case);
    while(test_case--)
    {
        long long a,b;
        scanf("%lld %lld", &a,&b);
        printf("%lld\n",degit_prime[b]-degit_prime[a-1]);
    }
    return 0;
}
long long degit_sume(long long n)
{
    long long k,l=0;
    while(n)
    {
        k=n%10;
        l+=k;
        n/=10;
    }
    return l;
}
