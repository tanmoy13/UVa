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

#define row 1001
#define col 2600
using namespace std;

int ara[row][col];
void fact()
{
    ara[0][0]=ara[1][0]=1;
    for(int i=2; i<row; i++)
        for(int j=0; j<col; j++)
        {
            ara[i][j]+=ara[i-1][j]*i;
            if(ara[i][j]>9)
            {
                ara[i][j+1]+=ara[i][j]/10;
                ara[i][j]%=10;
            }
        }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long long n;
    map<int, int> mp;
    fact();
    while(cin>>n && n)
    {
        int i;
        for(i=col-1; i>0; i--)
            if(ara[n][i]!=0)
                break;
        for(; i>-1; i--)
            mp[ara[n][i]]++;
        cout<<n<<"! --"<<endl;
        cout<<"   (0)    "<<mp[0]<<"    (1)    "<<mp[1]<<"    (2)    "<<mp[2]<<"    (3)    "<<mp[3]<<"    (4)    "<<mp[4]<<endl;
        cout<<"   (5)    "<<mp[5]<<"    (6)    "<<mp[6]<<"    (7)    "<<mp[7]<<"    (8)    "<<mp[8]<<"    (9)    "<<mp[9]<<endl;
        mp.clear();
    }
    return 0;
}
