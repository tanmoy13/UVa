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

#define MAX 1500

using namespace std;


int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

    bool prime[MAX];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<MAX;)
    {
        for(int j=i+i;j<MAX; j+=i)
            prime[j]=false;

        for(++i;;i++)
            if(prime[i])
                break;
    }

    prime[0]=false;

    map <char,int>mp;
    int k;
    for(char c='a', k=1; c<='z'; c++,k++)
        mp[c]=k;
    for(char c='A', k=27; c<='Z'; c++,k++)
        mp[c]=k;

    string str;

    while(cin>>str)
    {
        int sum=0,l=str.length();
        for(int t=0; t<l; t++)
            if(mp[str[t]] !=0)
                sum+=mp[str[t]];
        if(prime[sum])
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;

        str.clear();
    }
    return 0;
}
