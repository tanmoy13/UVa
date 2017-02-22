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
    long long t;
    //pf("%d",' ');
    cin>>t;
    while(t--)
    {
        queue <int>q;
        string str,str1;
        int n,p,vl;
        cin>>n>>p;
        while(n--)
        {
            cin>>vl;
            char c=vl+48;
            str.insert(str.end(),c);
        }
        str1=str;
        sort(str1.begin(),str1.end());
        while(str!=str1)
        {
            for(int i=0;i<str.length();i++)
            {
                for(int j=0;j<str.length();j++)

            }
        }
        cout<<str<<endl;
    }
    return 0;
}
