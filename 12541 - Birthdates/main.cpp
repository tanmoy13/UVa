//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <cstring>
//#include <algorithm>
//#include <cstdlib>
//#include <vector>
//#include <sstream>
//#include <set>
//#include <queue>
//#include <stack>
//#include <list>
//#include <string>
//#include <map>
//
//#define ll long long
//#define sc scanf
//#define pf printf
//#define Pi 2*acos(0.0)
//
//using namespace std;
//
//int main()
//{
//    ///freopen("input.txt","r",stdin);
//    ///freopen("output.txt","w",stdout);
//    long long n,dd,mm,yr,dd1=0,mm1=0,yr1=0,dd2=35,mm2=12,yr2=9999999999999999;
//    string name,old,young;
//    cin>>n;
//    bool first=true;
//    getchar();
//    while(n--)
//    {
//        cin>>name>>dd>>mm>>yr;
//        if(first)
//        {
//            yr1=yr2=yr;
//            mm1=mm2=mm;
//            dd1=dd2=dd;
//            first=false;
//            continue;
//        }
//        if(yr<yr1)
//        {
//            yr1=yr;
//            old=name;
//        }
//        else if(yr>yr2)
//        {
//            yr2=yr;
//            young=name;
//        }
//        else if(yr==yr1)
//        {
//            if(mm<mm1)
//            {
//                mm1=mm;
//                old=name;
//            }
//        }
//        else if(yr==yr1)
//        {
//            if(mm<mm1)
//            {
//                mm1=mm;
//                old=name;
//            }
//            else if(mm==mm1)
//            {
//                if(dd<dd1)
//                {
//                    dd1=dd;
//                    old=name;
//                }
//            }
//        }
//        else if(yr==yr2)
//        {
//            if(mm>mm2)
//            {
//                mm2=mm;
//                young=name;
//            }
//            else if(mm==mm2)
//            {
//                if(dd>dd1)
//                {
//                    dd2=dd;
//                    young=name;
//                }
//            }
//        }
//    }
//    cout<<young<<endl;
//    cout<<old<<endl;
//    return 0;
//}

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
    long long n,dd,mm,yr,x=-10000000000000,y=1000000000000,z;
    string name,old,young;
    cin>>n;
    while(n--)
    {
        cin>>name>>dd>>mm>>yr;
        z=yr*100+mm*10+dd;
        if(z>x)
        {
            x=z;
            young=name;
        }
        else if(z<y)
        {
            y=z;
            old=name;
        }
    }
    cout<<young<<endl;
    cout<<old<<endl;
    return 0;
}
