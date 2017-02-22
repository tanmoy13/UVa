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
#include <bits/stdc++.h>

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    char ch;
    int num=131071, n=0;
    while((ch=getchar()) !=EOF)
    {
        if(ch=='#')
        {
            if(n==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            n=0;
        }
        else
        {
            if(ch!='\n')
                n=(n*2+ch-48)%num;
        }
    }
    return 0;
}
