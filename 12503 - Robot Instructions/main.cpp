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

using namespace std;

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long t,n;
    long long ara[10000];
    string s;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        cin>>n;
        getchar();
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            if(s=="RIGHT")
                ara[i]=1;
            else if(s=="LEFT")
                ara[i]=-1;
            else
                ara[i]=ara[s[8]-48-1];
        }
        for(int i=0; i<n; i++)
            ans+=ara[i];
        cout<<ans<<endl;
    }
    return 0;
}
