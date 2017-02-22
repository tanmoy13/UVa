///*
//         +-+ +-+ +-+
//         |R| |.| |S|
//         +-+ +-+ +-+
// */
//
//#include <bits/stdc++.h>
//
//#define pii             pair <int,int>
//#define sc              scanf
//#define pf              printf
//#define Pi              2*acos(0.0)
//#define ms(a,b)         memset(a, b, sizeof(a))
//#define pb(a)           push_back(a)
//#define MP              make_pair
//#define db              double
//#define ll              long long
//#define EPS             10E-10
//#define ff              first
//#define ss              second
//#define sqr(x)          (x)*(x)
//#define D(x)            cout<<#x " = "<<(x)<<endl
//#define VI              vector <int>
//#define DBG             pf("Hi\n")
//#define MOD             100007
//#define MAX             10000
//#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
//#define SZ(a)           (int)a.size()
//#define sf(a)           scanf("%d",&a)
//#define sff(a,b)        scanf("%d%d",&a,&b)
//#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
//#define loop(i,n)       for(int i=0;i<n;i++)
//#define REP(i,a,b)      for(int i=a;i<b;i++)
//#define TEST_CASE(t)    for(int z=1;z<=t;z++)
//#define PRINT_CASE      printf("Case %d: ",z)
//#define all(a)          a.begin(),a.end()
//#define intlim          2147483648
//#define inf             1000000
//#define ull             unsigned long long
//
//using namespace std;
//
//
////const int fx[]={+1,-1,+0,+0};
////const int fy[]={+0,+0,+1,-1};
//
//
//int main()
//{
//    ///freopen("in.txt","r",stdin);
//    ///freopen("out.txt","w",stdout);
//    int t;
//    sf(t);
//    TEST_CASE(t)
//    {
//        int n,k,x;
//        sfff(n,k,x);
//        int sum=n*(n+1)/2;
//        int temp=x+k-1;
//        int sum1=temp*(temp+1)/2;
//        sum-=sum1;
//        x--;
//        sum1=x*(x+1)/2;
//        sum+=sum1;
//        PRINT_CASE;
//        pf("%d\n",sum);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int T,i,rslt,n,c,k;
//    scanf("%d",&T);
//    for(i=1; i<=T; i++)
//    {
//        int N,K,X;
//        scanf("%d %d %d",&N,&K,&X);
//        n=(N*(N+1))/2;
//        if(X==1)
//        {
//            k=(K*(K+1))/2;
//            rslt=n-k;
//            printf("Case %d: %d\n",i,rslt);
//        }
//        else
//        {
//            c=(K+X-1);
//            k=(c*(c+1))/2;
//            rslt=n-k;
//            c=(X-1);
//            k=(c*(c+1))/2;
//            rslt+=k;
//            printf("Case %d: %d\n",i,rslt);
//        }
//
//    }
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i,rslt,n,c,k;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        int N,K,X;
        scanf("%d %d %d",&N,&K,&X);
        n=(N*(N+1))/2;
        if(X==1)
        {
            k=(K*(K+1))/2;
            rslt=n-k;
            printf("Case %d: %d\n",i,rslt);
        }
        else if(K==1)
        {
            k=X;
            rslt=n-k;
            printf("Case %d: %d\n",i,rslt);
        }
        else
        {
            c=K+1;
            k=(K*(X+c))/2;
            rslt=n-k;
            printf("Case %d: %d\n",i,rslt);
        }

    }
    return 0;
}
