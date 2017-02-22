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
    long long n,ara[100000];
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            cin>>ara[i];
        long long swap,ans=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(ara[j]>ara[j+1])
                {
                    swap=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=swap;
                    ans++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<ans<<endl;
    }
    return 0;
}
