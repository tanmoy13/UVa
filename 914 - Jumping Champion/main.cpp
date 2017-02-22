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
bool prime[1000020];
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    memset(prime,true,sizeof(prime));
    for(int i=2; i<1000020;)
    {
        v.push_back(i);
        for(int j=i+i; j<1000020; j+=i)
            prime[j]=false;
        for(++i;; i++)
            if(prime[i])
                break;
    }
    prime[0]=prime[1]=false;
    long long l,u,t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        map<int,int>mp;
        l=min(a,b);u=max(a,b);
        long long dif=0,max=-100,ans=0,count1=0,count2=1;
        for(int i=l; i<u;i++ )
        {
            if(prime[i])
            {
                for(int j=i+1; j<=u; j++)
                    if(prime[j])
                    {
                        dif=j-i;
                        mp[dif]++;
                        count2++;
                        break;
                    }

            }
        }
        for(int i=0; i<mp.size(); i++)
        {
            if(mp[i]==max)
                count1++;
            if(mp[i]>max)
            {
                max=mp[i];
                ans=i;
                count1=0;
            }
        }
        //cout<<count2<<endl;
        if(count1>0 ||count2<2)
            cout<<"No jumping champion"<<endl;
        else
        cout<<"The jumping champion is "<<ans<<endl;
    }
    return 0;
}
