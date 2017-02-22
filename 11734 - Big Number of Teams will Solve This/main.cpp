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
    for(int i=1;i<=t;i++)
    {
        char str1[1000],str2[1000],str3[1000];
        gets(str1);
        gets(str2);
        if(!(strcmp(str1,str2)))
           {
               cout<<"Case "<<i<<": Yes"<<endl;
               continue;
           }
        int l=strlen(str1),k=0;
        for(int j=0;j<l;j++)
        {
            if(str1[j]!=' ')
               {
                   str3[k]=str1[j];
                   k++;
               }
        }
        str3[k]='\0';

        if(!(strcmp(str2,str3)))
            cout<<"Case "<<i<<": Output Format Error"<<endl;
        else
            cout<<"Case "<<i<<": Wrong Answer"<<endl;
    }
    return 0;
}
