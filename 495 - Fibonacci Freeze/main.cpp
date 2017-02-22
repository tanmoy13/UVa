#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>
#define MAX 5500
using namespace std;
string ara[MAX];

string sum(string str1,string str2)
{
    string ans="";
    int l=str1.length();
    int ll=str2.length();
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    int lll=max(l,ll);
    int a,b,carry=0,c,i=0;
    while(i<lll)
        {
            a=b=0;
            if(i<l)
                a=str1[i]-48;
            if(i<ll)
                b=str2[i]-48;
            c=a+b+carry;
            carry=c/10;
            c%=10;
            ans+=(c+48);
            i++;
            if(i==lll && carry!=0)
                ans+=carry+48;
        }
        reverse(ans.begin(),ans.end());
        return ans;
}

void fib()
{
    ara[0]="0";
    ara[1]="1";
    for(int i=2;i<MAX;i++)
        ara[i]=sum(ara[i-1],ara[i-2]);

}

int main()
{
    fib();
    int n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<ara[n]<<endl;
    }
    return 0;
}
