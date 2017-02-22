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
int x,y;

bool test(int a, int b)
{
    int ara1[5],ara2[5];
    int i=0;
    while(a)
    {
        ara1[i]=a%10;
        a/=10;
        i++;
    }
    x=i;
    if(i==4)
        ara1[i]=0;
    int j=0;
    while(b)
    {
        ara2[j]=b%10;
        b/=10;
        j++;
    }
    y=j;
    if(j<5)
        return false;
        sort(ara1,ara1+5);
        sort(ara2,ara2+5);
    for(i=0; i<4; i++)
        if(ara1[i]==ara1[i+1])
            return false;
    for(i=0; i<4; i++)
        if(ara2[i]==ara2[i+1])
            return false;
    for(int k=0; k<5; k++)
        for(int l=0; l<5; l++)
            if(ara1[k]==ara2[l])
                return false;
    return true;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int n,cnt;
    bool xx=false;
    while(cin>>n && n)
    {
        if(xx)cout<<endl;
        xx=true;
        cnt=0;
        for(int i=1234; i<=(98765/n)+1; i++)
        {
            int b=i*n;
            if(test(i,b))
               {
                   cout<<b<<" / ";
                   if(x<5)
                    cout<<0;
                   cout<<i<<" = "<<n<<endl,cnt++;
               }
        }
        if(cnt==0)
            cout<<"There are no solutions for "<<n<<"."<<endl;
    }
    return 0;
}
