#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,k,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        long long a,b,p,q;
        a=floor((double)x/k);
        b=ceil((double)x/k);
        for(p=0;p*a<=x;p++)
            if((x-p*a)%b==0)
        {
            q=(x-p*a)/b;
            break;
        }
        cout<<p<<" "<<q<<endl;
    }

    return 0;
}
