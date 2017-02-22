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
    ll n,a,b,c,i,j,k,e=0;
    while(sc("%lld",&n)==1)
    {
        e++;
        char member[10][100];
        char aa[100];
        ll ara[10]= {0};
        for(i=0; i<n; i++)
            sc("%s",&member[i]);
        for(i=0; i<n; i++)
        {
            sc("%s %lld %lld",&aa,&a,&b);
            for(j=0; j<n; j++)
            {
                if(strcmp(member[j],aa)==0)
                {
                    if(b==0)
                        continue;
                    ara[j]-=(a/b)*b;
                    break;
                }
            }
            for(j=0; j<b; j++)
            {
                sc("%s",aa);
                for(long long l=0; l<n; l++)
                {
                    if(strcmp(member[l],aa)==0)
                    {
                        if(b==0)
                        break;
                        ara[l]+=(a/b);
                        break;
                    }
                }
            }
        }
         if(e>1)
        {
            cout<<endl;
        }
        for(i=0; i<n; i++)
            pf("%s %lld\n",member[i],ara[i]);
    }
    return 0;
}
