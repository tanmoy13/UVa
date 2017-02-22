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
    vector<int>v;
    bool prime[10000];
    memset(prime,true,sizeof(prime));
    v.push_back(1);
    for(int i=2;i<10000;)
    {
        v.push_back(i);
        for(int j=i;j<10000;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
    long long n,c;
    while(cin>>n>>c)
    {
        vector<int>vv;
        for(int i=0;v[i]<=n;i++)
            vv.push_back(v[i]);
        int l=vv.size();
        if(c*2>l)
        {
            cout<<n<<" "<<c<<":";
            for(int i=0;i<l;i++)
                cout<<" "<<vv[i];
        }
        else if(l%2==1)
        {
            int length=(l-((c*2)-1))/2;
            cout<<n<<" "<<c<<":";
            for(int i=length, j=0;j<(c*2)-1;i++,j++)
                cout<<" "<<vv[i];
        }
        else if(l%2==0)
        {
            int length=(l-c*2)/2;
            cout<<n<<" "<<c<<":";
            for(int i=length,j=0;j<(c*2);i++,j++)
                cout<<" "<<vv[i];
        }
        cout<<endl<<endl;
///        cout<<vv.size()<<" "<<c*2<<endl;
///        for(int i=0;i<vv.size();i++)
///        cout<<i<<" "<<vv[i]<<endl;

}
    return 0;
}
