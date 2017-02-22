///*
//MMP""MM""YMM   db      `7MN.   `7MF'`7MMM.     ,MMF' .g8""8q.`YMM'   `MM'
//P'   MM   `7  ;MM:       MMN.    M    MMMb    dPMM .dP'    `YM.VMA   ,V
//     MM      ,V^MM.      M YMb   M    M YM   ,M MM dM'      `MM VMA ,V
//     MM     ,M  `MM      M  `MN. M    M  Mb  M' MM MM        MM  VMMP
//     MM     AbmmmqMA     M   `MM.M    M  YM.P'  MM MM.      ,MP   MM
//     MM    A'     VML    M     YMM    M  `YM'   MM `Mb.    ,dP'   MM
//   .JMML..AMA.   .AMMA..JML.    YM  .JML. `'  .JMML. `"bmmd"'   .JMML.
//*/
//
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
//#define pii pair <int,int>
//#define sc scanf
//#define pf printf
//#define Pi 2*acos(0.0)
//#define ms(a,b) memset(a, b, sizeof(a))
//#define pb(a) push_back(a)
//#define MP make_pair
//#define oo 1<<29
//#define dd double
//#define ll long long
//#define EPS 10E-10
//#define ff first
//#define ss second
//#define MAX 100
//#define SZ(a) (int)a.size()
//#define getint(a) scanf("%d",&a)
//#define loop(i,n) for(int i=0;i<n;i++)
//#define all(a) a.begin(),a.end()
//#define intlim 2147483648
//#define inf 1000000
//#define rtintlim 46340
//#define llim 9223372036854775808
//#define rtllim 3037000499
//#define ull unsigned long long
//#define I int
//
//using namespace std;
//
//int cnt;
//void func(string str)
//{
//    string str1=str;
//    for(int i=0;i<12;i++)
//    {
//        if(str[i]=='o' && str[i+1]=='o')
//        {
//            if(i+2<12 && str[i+2]=='-')
//            {
//                str[i]=str[i+1]='-';
//                str[i+2]='o';
//                func(str);
//                str=str1;
//            }
//            if(i-1>=0 && str[i-1]=='-')
//            {
//                str[i]=str[i+1]='-';
//                str[i-1]='o';
//                func(str);
//            }
//        }
//    }
//    int c=0;
//    for(int i=0;i<12;i++)
//        if(str[i]=='o') c++;
//    if(cnt>c)
//        cnt=c;
//}
//int main()
//{
//    ///freopen("in.txt","r",stdin);
//    ///freopen("out.txt","w",stdout);
//    int t;
//    string str;
//    cin>>t;
//    while(t--)
//    {
//        cin>>str;
//        cnt=1<<15;
//        func(str);
//        cout<<cnt<<endl;
//    }
//    return 0;
//}


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

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int cnt_leading_zero_bits(int N){return __builtin_clz(N);}
int cnt_trailing_zero_bits(int N){return __builtin_ctz(N);}
int cnt_1(int N){return __builtin_popcount(N);}
using namespace std;
int dp[1<<15];
int ans;
void bfs(int mask)
{
    bool visited[1<<15];
    ms(visited,false);
    visited[mask]=1;
    queue<int>Q;
    Q.push(mask);
    while(!Q.empty())
    {
        int temp;
        temp=Q.front();
        Q.pop();
        //dp[temp]=cnt_1(temp);
        ans=min(ans,cnt_1(temp));
        for(int i=0;i<12;i++)
        {
            if(check(temp,i) && check(temp,i+1))
            {
                if(i+2<12 && !check(temp,i+2))
                {
                    int sub=temp;
                    sub=reset(sub,i);
                    sub=reset(sub,i+1);
                    sub=Set(sub,i+2);
                    if(!visited[sub])
                    {
                        visited[sub]=1;
                        Q.push(sub);
                    }
                }
                if(i-1>-1 && !check(temp,i-1))
                {
                    int sub=temp;
                    sub=reset(sub,i);
                    sub=reset(sub,i+1);
                    sub=Set(sub,i-1);
                    if(!visited[sub])
                    {
                        visited[sub]=1;
                        Q.push(sub);
                    }
                }
            }
        }
    }
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int mask=0;
        //ms(dp,-1);
        for(int i=str.size()-1,j=0;i>-1;i--,j++)
        {
            if(str[i]=='o')
                mask=Set(mask,j);
        }
        ans=1000;
        bfs(mask);
        cout<<ans<<endl;
    }
    return 0;
}
