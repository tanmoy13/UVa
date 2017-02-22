#include <stdio.h>
#include <string.h>
int palli(int i,int j,char str1[])
{
    if(i<=j)
    {
        if(str1[i]==str1[j])
            palli(++i,--j,str1);
        else
            return 0;
    }
    return 1;
}
int main()
{
    char str1[1000],str2[1000];
    char str3[]="AEHIJLMOSTUVWXYZ12358",str4[]="A3HILJMO2TUVWXY51SEZ8";
    int i,j,k,l,m=0,n=0,p=0,q=0;
    while(scanf("%s",str1)==1)
    {
        getchar();
        k=strlen(str1);
        j=k-1;
        for(i=0; i<k/2; i++,j--)
        {

            for(l=0; l<21; l++)
            {
                if(str1[i]==str3[l])
                {
                    if(str1[j]==str4[l])
                        m=1;
                    else
                       {
                           p=1;
                           m=0;
                       }
                }
            }
            if(p==1)
                break;
        }
        i=0;
        q=palli(i,k-1,str1);
        if(q==1)
            n=1;
    if(n==0 && m==0)
        printf("%s -- is not a palindrome.\n",str1);
    else if(n==1 && m==0)
        printf("%s -- is a regular palindrome.\n",str1);
    else if(n==0 && m==1 )
        printf("%s -- is a mirrored string.\n",str1);
    else if(n==1 && m==1 )
        printf("%s -- is a mirrored palindrome.\n",str1);
    n=m=p=q=0;
    printf("\n\n");
    }
return 0;
}
