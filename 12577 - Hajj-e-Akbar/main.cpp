#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    long long i=0,j,x;
    char str1[6];///str2[]="Hajj",str3[]="Umrah";
    while(scanf("%s",str1)==1)
    {
        i++;
        if(!strcmp(str1,"*"))
           break;
        else if(!strcmp(str1,"Hajj"))
            printf("Case %lld: Hajj-e-Akbar\n",i);
        else if(!strcmp(str1,"Umrah"))
            printf("Case %lld: Hajj-e-Asghar\n",i);
    }
    return 0;
}
