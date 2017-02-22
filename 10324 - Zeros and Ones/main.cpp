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
    char str[2000000];
    int i,j,n,m=0;
    while(sc("%s",str)==1)
    {
        m++;
        cin>>n;
        bool test=true;
        while(n--)
        {
            int a=-10,b=10,k,l;
            cin>>i>>j;
            k=min(i,j);
            l=max(i,j);
            for(; k<l; k++)
            {
//                if(str[k]-48>a)
//                    a=str[l]-48;
//                if(str[k]-48<b)
//                    b=str[k]-48;
                if(str[k]==str[k+1])
                    a=1;
                else
                {
                    a=0;
                    break;
                }
            }
            if(test==true)
            {
                cout<<"Case "<<m<<":"<<endl;
                test=false;
            }
            if(i==j)
                a=1;
            if(a==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
