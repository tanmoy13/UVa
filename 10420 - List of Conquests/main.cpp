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
    string str,str1;
    vector <string>v;
    map <string,int>mp;
    map <string,bool>mpb;
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
    getline(cin,str);
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
            continue;
        str1+=str[i];
        if(str[i+1]==' ')
            break;

    }
    mp[str1]++;
    v.push_back(str1);
    mpb[str1]=true;
    str.clear();
    str1.clear();
    }
    sort(v.begin(),v.end());
    int l=v.size();
    for(int i=0;i<l;i++)
    {
        if(mpb[v[i]])
        {
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
            mpb[v[i]]=false;
        }
    }
    return 0;
}
