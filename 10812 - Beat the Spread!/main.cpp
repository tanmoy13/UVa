#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int s,d,a,b;
        scanf("%d %d",&s,&d);
        a=(s+d)/2;
        b=(s-a);
        if(a>-1 && b>-1 && (a+b)==s && (a-b)==d)
        {
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
