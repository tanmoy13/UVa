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
int digit_sum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    string str;
    int t,sum1=0,sum2=0,t_sum;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,str);
        bool test=true;
        sum1=sum2=0;
        int l=str.length(),nn;
        for(int i=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                if(test)
                    test=false;
                else
                    test=true;
                continue;
            }
            if(test)
            {
                if(i%2==0)
                {
                    nn=(str[i]-48)*2;
                    sum1+=digit_sum(nn);
                }
                else
                    sum2+=str[i]-48;
            }
            else if(!test)
            {
                if(i%2!=0)
                {
                    nn=(str[i]-48)*2;
                    sum1+=digit_sum(nn);
                }
                else
                    sum2+=str[i]-48;
            }
        }
        t_sum=sum1+sum2;
        if(t_sum%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
        str.clear();
    }
    return 0;
}
