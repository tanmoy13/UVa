#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,x,y,n,m;
    while(cin>>t && t!=0)
    {
        cin>>n>>m;
        while(t--)
        {
            cin>>x>>y;
            if(x==n || y==m)
                cout<<"divisa"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else if(x>n && y>m)
                cout<<"NE"<<endl;
            else if(x>n && y<m)
                cout<<"SE"<<endl;
            else if(x<n && y<m)
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
