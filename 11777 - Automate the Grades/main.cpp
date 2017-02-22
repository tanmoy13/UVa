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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    long long t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     double Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,a,b,total;
     cin>>Term1>>Term2>>Final>>Attendance>>Class_Test1>>Class_Test2>>Class_Test3;
        if(Class_Test1<=Class_Test2 && Class_Test1<=Class_Test3)
            a=(Class_Test2+Class_Test3)/2;
        else if(Class_Test2<=Class_Test1 && Class_Test2<=Class_Test3)
            a=(Class_Test1+Class_Test3)/2;
        else if(Class_Test3<=Class_Test1 && Class_Test3<=Class_Test2)
            a=(Class_Test1+Class_Test2)/2;
        total=Term1+Term2+Final+Attendance+a;
        if(total >= 90)
            cout<<"Case "<<i<<": "<<"A\n";
        else if( total>= 80)
            cout<<"Case "<<i<<": "<<"B\n";
        else if( total>= 70)
            cout<<"Case "<<i<<": "<<"C\n";
        else if( total>= 60)
            cout<<"Case "<<i<<": "<<"D\n";
        else if( total< 60)
            cout<<"Case "<<i<<": "<<"F\n";
        total=a=0;
    }
    return 0;
}
