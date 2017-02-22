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
    long long t,ara[3]={0};
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++)
            cin>>ara[i];
        sort(ara,ara+3);
        if(ara[0]+ara[1]>ara[2])
            cout<<"OK\n";
        else
            cout<<"Wrong!!\n";
    }
    return 0;
}
