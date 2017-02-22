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
    vector <int>v;
    bool prime[1000000];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<1000000;)
    {
        v.push_back(i);
        for(int j=i;j<1000000;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<<"   ";
    long long num;
    while(cin>>num && num!=0)
    {
        long long a,b,count=0,i=0,carry;
        b=num;
        while(b/v[i]!=0)
        {
            carry=0;
            int j=0;
            while(carry==0)
            {
                carry=b%v[i];
                if(carry==0)
                    b/=v[i];
                j++;
            }
            i++;
            if(j>1)
                count++;
        }
        cout<<num<<" : "<<count<<endl;
    }
    return 0;
}
