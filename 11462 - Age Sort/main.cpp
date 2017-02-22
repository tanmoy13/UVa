#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
    long long i,j,n,age;
    vector<int>ara;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld",&age);
            ara.push_back(age);
        }
        sort(ara.begin(),ara.end());
        for(i=0; i<n; i++)
        {
            printf("%d",ara[i]);
            if(i!=n-1)
                printf(" ");
        }
        printf("\n");
        ara.clear();
    }
    return 0;
}
