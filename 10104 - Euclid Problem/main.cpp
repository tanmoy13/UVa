#include <bits/stdc++.h>

#define pll pair <long long,long long>
#define ff first
#define ss second

using namespace std;

pll euclid(long long a, long long b)
{
    if(b==0)
        return pll(1,0);
    else
    {
        pll d= euclid(b,a%b);
        return pll(d.ss,d.ff-d.ss*(a/b));
    }
}


int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        pll p;
        long long gcd;
        p=euclid(a,b);
        gcd=__gcd(a,b);
        cout<<p.ff<<" "<<p.ss<<" "<<gcd<<endl;
    }
    return 0;
}
