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
int press_count(char a)
{
    switch(a)
    {
    case 'a':
    case 'd':
    case 'g':
    case 'j':
    case 'm':
    case 'p':
    case 't':
    case 'w':
    case ' ':
    {
        return 1;
    }
    case 'b':
    case 'e':
    case 'h':
    case 'k':
    case 'n':
    case 'q':
    case 'u':
    case 'x':
    {
        return 2;
    }
    case 'c':
    case 'f':
    case 'i':
    case 'l':
    case 'o':
    case 'r':
    case 'v':
    case 'y':
    {
        return 3;
    }
    case 's':
    case 'z':
    {
        return 4;
    }
    default:
    {
        return 0;
    }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long int t,ans,l;
    string str;
    while(scanf("%lld",&t)==1)
    {
        getchar();
        for(int j=1; j<=t; j++)
        {
            getline(cin,str);
            ans=0;
            for(int i=0; i<str.length(); i++)
            {
                char c=str[i];
                ans+=press_count(c);
            }
        cout<<"Case #"<<j<<": "<<ans<<endl;
        }
    }
    return 0;
}
