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
    long long i,j,t,swap;
    scanf("%lld",&t);
    while(t--)
    {
        long long sides[4]={0};
        scanf("%lld %lld %lld %lld", &sides[0],&sides[1],&sides[2],&sides[3]);
        sort(sides,sides+4);
        if(sides[0]==sides[1] && sides[1]==sides[2] && sides[2]==sides[3])
            printf("square\n");
        else if(sides[0]==sides[1] && sides[2]==sides[3])
            printf("rectangle\n");
        else if(sides[3]<(sides[0]+sides[1]+sides[2]))
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
