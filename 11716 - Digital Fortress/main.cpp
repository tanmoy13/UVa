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
    long long t;
    cin>>t;
    getchar();
    while(t--)
    {
        string str;
        getline(cin,str);
        int l=str.length();
        int n=sqrt(l);
        if(n*n !=l)
          {
             cout<<"INVALID"<<endl;
             continue;
          }
        else
        {
            char matrix[n][n];
            for(int i=0,k=0;i<n;i++)
                for(int j=0;j<n;j++)
            {
                matrix[i][j]=str[k];
                k++;
            }
            for(int i=0,k=0;i<n;i++)
                for(int j=0;j<n;j++)
            {
                cout<<matrix[j][i];
            }
            cout<<endl;
        }

    }
    return 0;
}
