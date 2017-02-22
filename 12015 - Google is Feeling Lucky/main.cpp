#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstdlib>

using namespace std;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    char site[10][100];
    long int id[10],max=0,i,j,t;
    while(scanf("%ld", &t)==1)
    {
    for(j=1;j<=t;j++)
    {
    for(i=0;i<10;i++)
    {
        getchar();
        scanf("%[^ ]",site[i]);
        scanf("%ld",&id[i]);
        if(id[i]>max)
            max=id[i];
    }
    printf("Case #%ld:\n",j);
    for(i=0;i<10;i++)
    {
        if(id[i]==max)
            printf("%s\n",site[i]);
    }
    max=0;
    }
    }
    return 0;
}
