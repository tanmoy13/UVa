#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int t,n,x,low=1000000000,high=-1000000000,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x>high)
                high=x;
            if(x<low)
                low=x;
        }
        ans=(high-low)*2;
        cout<<ans<<endl;
        low=1000000000,high=0,ans=0;
    }
    return 0;
}
