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

    char str[1000];
    long long i,j,k,t,l;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(str);
        l=strlen(str);
        if(str[l-2]=='3' && str[l-1]=='5')
            cout<<"-\n";
        else if(str[0]=='9' && str[l-1]=='4')
            cout<<"*\n";
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
            cout<<"?\n";
        else
            cout<<"+\n";
    }
    return 0;
}
