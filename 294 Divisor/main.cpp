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
//    vector<long long> v;
//    bool prime[1000000];
//    memset(prime,true,sizeof(prime));
//    for(int i=2;i<1000000;)
//    {
//        v.push_back(i);
//        for(int j=i+i;j<1000000;j+=i)
//            prime[j]=false;
//        for(++i;;i++)
//            if(prime[i])
//                break;
//    }
    long long t,a,b,max_num=0,max_divisor=0,i,j,div,num,p;
    cin>>t;
    while(t--)
    {
        sc("%lld %lld",&a,&b);
        max_num=0,max_divisor=0;
        for(i=a;i<=b;i++)
            {
                div=0;
                p=sqrt(i);
                for(j=1;j<=p;j++)
                  {
                      if(j*j==i)
                      {
                          div++;
                      }
                      else if(i%j==0)
                        div+=2;

                  }

//                while(num>1)
//                {
////                    int count=1;
//                    while(num%v[j]==0)
//                    {
//                        num/=v[j];
//                        count++;
//                    }
//                    div*=count;
//                    j++;
//                }
                if(div>max_divisor)
                {
                    max_divisor=div;
                    max_num=i;
                }
            }
            cout<<"Between "<<a<<" and "<<b<<", "<<max_num<<" has a maximum of "<<max_divisor<<" divisors."<<endl;
    }
    return 0;
}
