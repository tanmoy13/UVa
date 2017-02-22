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
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdin);
    long long t,n,i,j,l,high,low,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        bool a=true;
        low=high=0;
        cin>>k;
        for(l=0;l<k;l++)
        {

            cin>>n;
            if(a==true)
            {
                j=n;
                a=false;
            }
            if(n<j)
            {
                low++;
                j=n;
            }
            else if(n>j)
            {
                high++;
                j=n;
            }
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
