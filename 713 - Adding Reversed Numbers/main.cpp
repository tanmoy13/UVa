/*
MMP""MM""YMM   db      `7MN.   `7MF'`7MMM.     ,MMF' .g8""8q.`YMM'   `MM'
P'   MM   `7  ;MM:       MMN.    M    MMMb    dPMM .dP'    `YM.VMA   ,V
     MM      ,V^MM.      M YMb   M    M YM   ,M MM dM'      `MM VMA ,V
     MM     ,M  `MM      M  `MN. M    M  Mb  M' MM MM        MM  VMMP
     MM     AbmmmqMA     M   `MM.M    M  YM.P'  MM MM.      ,MP   MM
     MM    A'     VML    M     YMM    M  `YM'   MM `Mb.    ,dP'   MM
   .JMML..AMA.   .AMMA..JML.    YM  .JML. `'  .JMML. `"bmmd"'   .JMML.
*/


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

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 100
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int


using namespace std;

string clear_0(string strr)
{
    int i=0;
    int j=strr.length();
    while(strr[i]=='0')
    {
//        if(strr[i]!='0')
//            break;
        strr.erase(strr.begin()+i);
    }
    return strr;
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    string str1,str2,str3;
    cin>>t;
    while(t--)
    {
        cin>>str1>>str2;
//        cout<<str1<<endl;
//        cout<<str2<<endl;
        reverse(all(str1));
        reverse(all(str2));
//        cout<<str1<<endl;
//        cout<<str2<<endl;
        str1=clear_0(str1);
        str2=clear_0(str2);
//        cout<<str1<<endl;
//        cout<<str2<<endl;
        int a,b,c;
        a=str1.size();
        b=str2.size();
        c=max(a,b);
        int i=0;
        reverse(all(str1));
        reverse(all(str2));
//        cout<<str1<<endl;
//        cout<<str2<<endl;
        int z=0;
        while(i<c)
        {
            int x=0,y=0;
            if(i<a)
                x=str1[i]-'0';
            if(i<b)
                y=str2[i]-'0';
            z+=x+y;
            str3+=(z%10)+'0';
            z/=10;
            if(i==c-1 && z!=0)
                str3+=z+'0';
            i++;
        }
        //cout<<str3<<endl;
        //reverse(all(str3));
        //cout<<str3<<endl;
        //cout<<str3<<endl;
        str3=clear_0(str3);
        //reverse(all(str3));
        cout<<str3<<endl;
        str1.clear();
        str2.clear();
        str3.clear();
    }
    return 0;
}
