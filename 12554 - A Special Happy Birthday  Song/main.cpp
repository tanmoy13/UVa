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
    ll a,b,i,j,k,n,t;
    char name[100][100];
    char song[16][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(cin>>n)
    {
        a=1;
        for(i=0;i<n;i++)
            sc("%s",name[i]);
        if(n>16)
            a=ceil(n/16)+1;
        for(i=0,j=0,k=0;i<16*a;i++,j++,k++)
        {
            if(j==n)
                j=0;
            if(k==16)
                k=0;
            pf("%s: %s\n",name[j],song[k]);
        }
    }
    return 0;
}

