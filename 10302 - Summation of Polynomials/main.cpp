#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>


using namespace std;

int main()
{
    long long n;
    while(scanf("%lld", &n)==1)
    {
        printf("%lld\n",((n*n*(n+1)*(n+1))/4));
    }
    return 0;
}
