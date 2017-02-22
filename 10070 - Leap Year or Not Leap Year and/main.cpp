#include <iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<stdlib.h>

using namespace std;
int main()
{
    char year[100000];
    int x=0,l=0,i,m4,m400,m100,m55,m15,print=0;
    while(gets(year))
    {
        if( print == 1)
            printf("\n");
        print = 1;
        x=strlen(year);
        if(x<3)
            continue;
        m4=m15=m400=m100=m55=0;
        for(i=0; i<x; i++)
        {
            if(year[i]<='9' && year[i]>='0')
            {
                m4=((m4*10)+(year[i]-48))%4;
                m400=((m400*10)+(year[i]-48))%400;
                m100=((m100*10)+(year[i]-48))%100;
                m15=((m15*10)+(year[i]-48))%15;
                m55=((m55*10)+(year[i]-48))%55;
            }
        }

        if((m4==0 && m100!=0) || m400==0)
        {
            printf("This is leap year.\n");
            x=1;
            l=1;
        }
        if(m15==0)
        {
            printf("This is huluculu festival year.\n");
            l=1;
        }
        if(m55==0 && x==1)
            printf("This is bulukulu festival year.\n");
        if(l!=1)
            printf("This is an ordinary year.\n");
        x=l=0  ;
    }
    return 0;
}
