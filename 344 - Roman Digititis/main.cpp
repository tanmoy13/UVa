#include <iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>

long int I,V,X,L,C;

using namespace std;
void unit (long int n);
void tenunit (long int n);
int main()
{
    long int i,j,n,t;
    while(scanf("%ld", &n)==1 && n!=0)
    {
        I=V=X=L=C=0;
        for(i=1;i<=n;i++)

        {
            unit(i%10);
            tenunit(i/10);
        }
        printf("%ld: %ld i, %ld v, %ld x, %ld l, %ld c\n",n,I,V,X,L,C);
        I=V=X=L=C=0;
    }
    return 0;
}
void unit(long int n)
{
    switch (n)
    {
    case 1:
        {
            I++;
            break;
        }
    case 2:
        {
            I+=2;
            break;
        }
    case 3:
        {
            I+=3;
            break;
        }
    case 4:
        {
            I++;
            V++;
            break;
        }
    case 5:
        {
            V++;
            break;
        }
    case 6:
        {
            I++;
            V++;
            break;
        }
    case 7:
        {
            I+=2;
            V++;
            break;
        }
    case 8:
        {
            I+=3;
            V++;
            break;
        }
    case 9:
        {
            I++;
            X++;
            break;
        }
    }
}

void tenunit (long int n)
{
    switch (n)
    {
    case 1:
        {
            X++;
            break;
        }
    case 2:
        {
            X+=2;
            break;
        }
    case 3:
        {
            X+=3;
            break;
        }
    case 4:
        {
            X++;
            L++;
            break;
        }
    case 5:
        {
            L++;
            break;
        }
    case 6:
        {
            X++;
            L++;
            break;
        }
    case 7:
        {
            X+=2;
            L++;
            break;
        }
    case 8:
        {
            X+=3;
            L++;
            break;
        }
    case 9:
        {
            X++;
            C++;
            break;
        }
    }
}
