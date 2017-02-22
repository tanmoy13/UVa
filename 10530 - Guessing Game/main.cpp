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
    string str;
    int high=100,low=-100,num;
    bool test=true;
    while(sc("%d",&num) && num !=0)
    {
        getchar();
        getline(cin,str);
        if(str=="too high")
        {
            if(num<high)
            high=num;
            if(high<=low)
                test=false;
        }
        else if(str=="too low")
        {
            if(num>low)
                low=num;
            if(low>=high)
                test=false;
        }
        else if(str=="right on")
        {
            if((low <num && num <high) && test)
                cout<<"Stan may be honest\n";
            else
                cout<<"Stan is dishonest\n";
            test=true;
            high=100;
            low=-100;
        }
        str.clear();
    }
    return 0;
}
