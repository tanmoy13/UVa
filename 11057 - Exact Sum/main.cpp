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
    vector <int> v;
    int n,num,price;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>num;
            v.push_back(num);
        }
        cin>>price;
        sort(v.begin(),v.end());
        bool test=false;
        int x=price/2,pos=0;

        for(int i=0;i<v.size();i++)
            if(v[i]>=x)
        {
            pos=i;
            break;
        }

        for(int i=pos; v[i]<=price ; i++)
        {
            for(int j=i-1; v[i]+v[j]>=price; j--)
                if(v[i]+v[j]==price)
                {
                    cout<<"Peter should buy books whose prices are "<<v[j]<<" and "<<v[i]<<"."<<endl<<endl;
                    test=true;
                    break;
                }
            if(test)
                break;

        }
        v.clear();
    }
    return 0;
}
