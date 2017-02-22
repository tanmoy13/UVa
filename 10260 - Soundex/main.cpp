#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    long long l,i;
    char wrd[25];
    while(gets(wrd))
    {
        l=strlen(wrd);
        for(i=0; i<l; i++)
        {
            if(wrd[i]=='B'||wrd[i]=='F'||wrd[i]=='P'||wrd[i]=='V')
            {
                if(wrd[i-1]!='B' && wrd[i-1]!='F' && wrd[i-1]!='P' && wrd[i-1]!='V')
                    printf("1");
            }
            else if(wrd[i]=='C'||wrd[i]=='G'||wrd[i]=='J'||wrd[i]=='K'||wrd[i]=='Q'||wrd[i]=='S'||wrd[i]=='X'||wrd[i]=='Z')
            {
                if(wrd[i-1]!='C' && wrd[i-1]!='G' && wrd[i-1]!='J' && wrd[i-1]!='K' && wrd[i-1]!='Q' && wrd[i-1]!='S' && wrd[i-1]!='X' && wrd[i-1]!='Z')
                    printf("2");
            }
            else if(wrd[i]=='D'||wrd[i]=='T')
            {
                if(wrd[i-1]!='D' && wrd[i-1]!='T')
                    printf("3");
            }
            else if(wrd[i]=='L')
            {
                if(wrd[i-1]!='L')
                    printf("4");
            }
            else if(wrd[i]=='M'||wrd[i]=='N')
            {
                if(wrd[i-1]!='M' && wrd[i-1]!='N')
                    printf("5");
            }
            else if(wrd[i]=='R')
            {
                if(wrd[i-1]!='R')
                    printf("6");
            }
        }
        printf("\n");
    }
    return 0;
}
