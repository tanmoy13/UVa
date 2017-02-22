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
    ///vector <int>v;
    while(cin>>n && n!=0)
    {
        char str[200]={'\0'};
        long long count=0,j=0;
        while(n)
        {
            if(n%2)
                count++;
            ///v.push_back(n%2);
            str[j]=48+(n%2);
            n/=2;
            j++;
        }
        ///reverse(v.begin(),v.end());
        reverse(str,str+j);
        cout<<"The parity of ";
        ///for(int i=0;i<v.size();i++)
            ///cout<<v[i];
        cout<<str<<" is "<<count<<" (mod 2)."<<endl;
        ///v.clear();
    }
    return 0;
}
