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
    bool prime[5000];
    memset(prime,true,sizeof(prime));
    for(int i=2; i<5000;)
    {
        v.push_back(i);
        for(int j=i+i; j<5000; j+=i)
            prime[j]=false;
        for(++i;; i++)
            if(prime[i])
                break;
    }
    int test_case;
    cin>>test_case;
    for(int t=1; t<=test_case; t++)
    {
        string str,ans_str;
        map<char,int>mp;
        cin>>str;
        int l=str.length();
        for(int i=0; i<l; i++)
            mp[str[i]]++;
        for(int i=48; i<123; i++)
        {
            if(mp[i]!=0)
            {
                for(int j=0; v[j]<=mp[i]; j++)
                {
                    if(mp[i]==v[j])
                        ans_str.push_back(i);
                }
            }
        }
        if(ans_str.length()>0)
        {
            cout<<"Case "<<t<<": ";
            cout<<ans_str<<endl;
        }
        else
            cout<<"Case "<<t<<": empty"<<endl;
    }
    return 0;
}
