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
    long long n;
    string str;
    cin>>n;
    getline(cin,str);
    getline(cin,str);
    while(n--)
    {
        string str;
        vector <string> v;
        map <string,string>mp;
        while(getline(cin,str) && str !="")
        {
            string str1="";
            int l=str.length();
            for(int i=0;i<l;i++)
            {
                if(str[i]!=' ')
                    str1+=str[i];
            }
            sort(str1.begin(),str1.end());
            v.push_back(str);
            mp[str]=str1;
            str.clear();
            str1.clear();
        }
        sort(v.begin(),v.end());
        int vs=v.size()-1;
        for(int i=0;i<=vs;i++)
            for(int j=i+1;j<=vs;j++)
                if(mp[v[i]]==mp[v[j]])
                cout<<v[i]<<" = "<<v[j]<<endl;
        if(n)
            cout<<endl;
        mp.clear();
        v.clear();
    }
    return 0;
}
