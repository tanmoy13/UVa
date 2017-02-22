#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    char a;
    int i,j;
    while(scanf("%c",&a)==1)
    {
        if(a=='\n')
        {
            printf("\n");
            continue;
        }
        printf("%c",a-7);
    }
    return 0;
}
