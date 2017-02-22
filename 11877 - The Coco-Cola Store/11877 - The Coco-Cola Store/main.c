//#include <stdio.h>
//
//int main()
//{
//    int n,em_btl,fl_btl,i,j,sum=0;
//    while(scanf("%d", &n))
//    {
//        if(n==0)
//            break;
//        j=n;
//        while(j !=1)
//        {
//        fl_btl=j/3;
//        em_btl=j%3+fl_btl;
//        sum+=fl_btl;
//        j=em_btl;
//        if(j==2)
//        {
//            sum++;
//            j=1;
//        }
//        }
//        printf("%d\n", sum);
//        sum=0;
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,s,i,sum,a,p,rm;
    while((scanf("%d",&n)) && n)
    {
        s=n/3;
        rm=n%3;
        p=rm+s;
        sum=s;
        if(p==2)
        {
            sum++;
            p=1;
        }

        for(i=3; i<=p; )
        {

            a=p/i;
            rm=p%i;
            p=rm+a;
            if(p==2)
            {
                sum++;
                p=1;
            }
            sum=sum+a;
        }
        printf("%d\n",sum);
    }

    return 0;

}
