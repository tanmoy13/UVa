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
    int n,num;
    while(cin>>n && n)
    {
        priority_queue<long long>Q;
        for(int i=0; i<n; i++)
           {
             cin>>num;
             Q.push(-num);
           }
        long long sum,ans=0,a,b;
        for(int i=0;i<n-1;i++)
        {
            a=-Q.top();
            Q.pop();
            b=-Q.top();
            Q.pop();
            sum=a+b;
            ans+=sum;
            Q.push(-sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}
