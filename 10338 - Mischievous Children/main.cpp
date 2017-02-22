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

long long func(int num)
{
    long long ans=1;
    if(num==0)
        return 1;
    ans=num*func(num-1);
    return ans;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long t;
    //cout<<func(14)/24<<endl;
    cin>>t;

    getchar();
    for(int l=1; l<=t; l++)
    {
        string str;
        map <char,int>mp;
        cin>>str;
        int len=str.length();
        //cout<<len<<endl;
        for(int i=0; i<len; i++)
            mp[str[i]]++;
        vector <int>v;
        for(char c='A'; c<='Z'; c++)
        {
//            {cout<<c<<"  "<<mp[c]<<endl;
            if(mp[c]>1)
                v.push_back(mp[c]);
        }
        long long ans=func(len);
        for(int i=0; i<v.size(); i++)
            ans/=func(v[i]);
        cout<<"Data set "<<l<<": "<<ans<<endl;
    }
    return 0;
}
