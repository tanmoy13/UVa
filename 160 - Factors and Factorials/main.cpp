#include <iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
    int i,j,k,n,save,count,flag;
    vector <int> v;
    bool prime[100];
    memset(prime,true,sizeof(prime));
    for(i=2;i<100;)
    {
        v.push_back(i);
        for(j=i;j<100;j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
while(scanf("%d",&n)==1 && n!=0)
{
    save=n;
    int ans[25]={0};
    while(n !=1)
    {
        i=n;
        j=0;
        while(i>1)
        {
            count=0;
            while(i%v[j]==0)
            {
                i=i/v[j];
                count++;
            }
            ans[j]+=count;
            j++;
        }
        n--;
    }
    for(i=24;i>=0;i--)
        if(ans[i] !=0)
            break;
   printf("%3d! =",save);
    if(i>=15)
        flag=0;
    else
        flag=15;
    for(j=0;j<=i;j++)
    {
        printf("%3d", ans[j]);
        flag++;
        if(flag==15)
            printf("\n%6c",' ');
    }
    printf("\n");
}
return 0;
}
