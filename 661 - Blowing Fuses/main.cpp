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
    long long m,n,c,t=0;
    while(cin>>n>>m>>c)
    {
        if(m==0 && n==0 && c==0)
            break;
        t++;
        long long ara[50]= {0},sum=0,mm,max= -100;
        bool test[50];
        bool test2=true;
        memset(test, false , sizeof(test));
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>mm;
            if(test[mm-1]==false)
            {
                sum+=ara[mm-1];
                test[mm-1]=true;
            }
            else
            {
                sum-=ara[mm-1];
                test[mm-1]=false;
            }
            if(sum > max)
                max=sum;
            if(sum > c)
            {
                test2=false;
            }
        }
        cout<<"Sequence "<<t<<endl;
        if(test2==false)
            cout<<"Fuse was blown."<<endl;
        else
        {
            cout<<"Fuse was not blown.\n";
            cout<<"Maximal power consumption was "<<max<<" amperes.\n";
        }
        cout<<endl;
    }
    return 0;
}
