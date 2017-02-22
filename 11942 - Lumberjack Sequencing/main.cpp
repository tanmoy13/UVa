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
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long t,n,i,j,k,a=-1000000000,b=1000000000;
    bool test=true;
    cin>>t;
    while(t--)
    {
        a=-1000000000;
        b=1000000000;
        i=j=k=0;
        while(i<10)
        {
            scanf("%lld",&n);
            if(i==0)
            {
                a=b=n;
            }
            else if(n>a)
            {
                a=n;
                j++;
            }
            else if(n<b)
            {
                b=n;
                k++;
            }
            i++;
        }
        if(test==true)
        {
            cout<<"Lumberjacks:\n";
            test=false;
        }
        if(j==9 || k==9)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
    }
    return 0;
}
