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
    char c[10];
    int i,j,k,t,l;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(c);
        l=strlen(c);
        if(l==3 && (c[0]=='o'||c[1]=='n'|| c[3]=='e'))
           cout<<"1\n";
        else if(l==3 && (c[0]=='t'||c[1]=='w'|| c[3]=='o'))
           cout<<"2\n";
        else if(l==5)
           cout<<"3\n";
    }
    return 0;
}
