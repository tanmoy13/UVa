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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    queue<char>q;
    while(cin>>str)
    {
        int l=str.length(),k;
        char ch;
        if(str=="\n")
        {
            pf("\n");
            str.clear();
            continue;
        }
        for(int i=0; i<l; i++)
        {
            if((str[i]>='0' && str[i]<='9') && (str[i+1]>='0' && str[i+1]<='9'))
            {
                if(str[i+2]=='b')ch=' ';
                else ch=str[i+2];
                k=str[i]-48+str[i+1]-48;
                for(int j=0; j<k; j++)
                {
                    q.push(ch);
                }
                i++;
            }
            else if(str[i]=='!' || ((str[i]>='0' && str[i]<='9')))
            {
                if(str[i]=='!')
                {
                    q.push('\n');
                    continue;
                }
                k=str[i]-48;
                if(str[i+1]=='b')
                    ch=' ';
                else
                    ch=str[i+1];
                for(int j=0; j<k; j++)
                {
                    q.push(ch);
                }
            }
        }
        while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
        cout<<endl<<endl;
    }
    return 0;
}


