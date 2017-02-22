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
    long long n,q;
    vector <string> slogan;
    string first_line,str;
    cin>>n;
    getchar();
    n*=2;
    for(int i=0; i<n; i++)
    {
        getline(cin,str);
        slogan.push_back(str);
    }
    cin>>q;
    getchar();
    while(q--)
    {
        getline(cin,first_line);
        for(int i=0; i<2*n; i+=2)
        {
            if(first_line==slogan[i])
            {
                cout<<slogan[i+1]<<endl;
                break;
            }
        }
    }
    return 0;
}
