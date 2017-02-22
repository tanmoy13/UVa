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
long long sum_digit(long long n)
{
    long long ans=0;
    while(n)
    {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    vector<int>v;
    bool prime[100000];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<100000;)
    {
        v.push_back(i);
        for(int j=i+i;j<100000;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
    long long t,n;
    cin>>t;
    while(t--)
    {
        long long digit_sum=0,pfactor_sum=0,ara[1000]={0},i=0,j;
       cin>>n;
       digit_sum=sum_digit(n);
       while(n>1)
       {
           long long count=0;
           while(n%v[i]==0)
           {
                count++;
               n/=v[i];
           }
           pfactor_sum+=count;
           i++;
       }
       cout<<digit_sum<<" "<<pfactor_sum;
    }
    return 0;
}
