#include <stdio.h>
int main()
{
    unsigned long int a,b,c;
    while(scanf("%lu %lu", &b,&a) != EOF)
    {
        if(b>a)
        {
            c=a;
            a=b;
            b=c;
        }
        printf("%lu\n", a-b);
    }
    return 0;
}
