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
    long long t,i;
    string str;
    queue <char> decode;
    queue <int> term;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        str.clear();
        cin>>str;
        long long num=0;
        for(int j=0; j<str.length(); j++)
        {
            if(str[j]>='A' && str[j]<='Z')
            {
                if(num>0)
                {
                    term.push(num);
                    num=0;
                }
                decode.push(str[j]);
            }
            else if(str[j]>='0' && str[j]<='9')
                num=num*10+str[j]-48;
        }
        term.push(num);
        num=0;
        cout<<"Case "<<i<<": ";
        while(!decode.empty())
        {
            for(int j=0; j<term.front(); j++)
                cout<<decode.front();
            decode.pop();
            term.pop();
        }
        cout<<endl;
    }
    return 0;
}
