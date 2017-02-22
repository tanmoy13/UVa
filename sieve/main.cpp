#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int p_size=1000000,i,j,x;
    bool prime[p_size];
    memset(prime,true,sizeof(prime));
    for(i=2;i<p_size;)
    {
        v.push_back(i);
        for(j=i+i;j<(p_size);j+=i)
            prime[j]=false;
        for(++i;;i++)
            if(prime[i])
                break;
    }
    for(i=0;i<v.size();i++)
            printf("%d ",v[i]);
    return 0;
}
