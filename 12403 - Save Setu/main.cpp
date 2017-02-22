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
    char str1[100],str2[100];
    long long total=0,amount,t,n;
    cin>>t;
    while(t--)
    {
        scanf("%s",str1);
        getchar();
        if(!strcmp(str1,"donate"))
            {cin>>amount;
            total+=amount;
            }
        else if(!strcmp(str1,"report"))
        {
            cout<<total<<endl;
        }
    }
    return 0;
}
