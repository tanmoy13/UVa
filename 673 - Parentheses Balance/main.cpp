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
    long long i,t,l;
    stack<char>braces;
    cin>>t;
    getchar();
    while(t--)
    {
        char s[150];
        long long ans=0;
        gets(s);
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='(' || s[i]=='[')
                braces.push(s[i]);
            else if(!braces.empty())
            {
                if(s[i]==']' && braces.top()=='[')
                {
                    braces.pop();
                }
                else if(s[i]==')' && braces.top()=='(')
                {
                    braces.pop();
                }
            }
            else
                ans++;
        }
        if(ans==0 && braces.empty())
            cout<<"Yes\n";
        else
            cout<<"No\n";
        while(!braces.empty())
            braces.pop();
        }
    return 0;
}
