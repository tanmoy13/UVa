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

#define mmset(a,b) memset(a,b,sizeof(a))
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define MAX 10001000
using namespace std;
//vector<long long >v;
long long v[1000000],k=0;
bool prime[MAX];
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    mmset(prime,true);
    for(int i=2; i<=MAX;)
    {
        v[k++]=(long long)i;
        for(int j=i+i;j<=MAX;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;

    }
    long long n,ans,count1,lim=k;
    while(cin>>n && n)
    {
        ans=count1=0;
        if(n<0)
            n=abs(n);

        for(int i=0; i<lim && n>1 && v[i]<=n ; i++)
        {
            if(n%v[i]==0)
            {
                count1++;
                while(n>1 && n%v[i]==0)
                {
                    n/=v[i];
                }

                ans=v[i];
            }
            if(n==1)
                break;
        }
        if(n==1)
        {if(count1>1)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;}
        else
        {if(count1>0)
            cout<<n<<endl;
            else
                cout<<-1<<endl;
        }

    }
    return 0;
}
