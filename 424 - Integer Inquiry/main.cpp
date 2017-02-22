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
    long long i,j,k,l,a,b,sum;
    char ans[10000], num[10000];
    char ara[10000],ara1[1000];

        while(gets(num))
        {
            int carry=0;
            for(i=strlen(num)-1,j=0;;i--,j++)
                {
                    sum=num[i]-48+ara[j]+carry;
                    a=sum%10;
                    carry=sum/10;
                    ara1[j]=a+48;
                    if(ara1[j]<48 || ara1[j]>57)
                        {ara1[j]='\0';
                        break;}

                }
                strcpy(ara,ara1);
                //strrev(ara);
           puts(ara);
        }
    return 0;
}
