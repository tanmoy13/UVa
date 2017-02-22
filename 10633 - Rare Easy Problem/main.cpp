#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,x,y;
    while(cin>>n && n)
    {
        if(n>9)
        {
        y=(n*10)/9;
        x=y-1;
        if(n%9==0)
            cout<<x<<" "<<y<<endl;
        else
            cout<<y<<endl;
        }
    }
    return 0;
}

