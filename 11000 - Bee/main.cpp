#include <bits/stdc++.h>

using namespace std;

long long fib[10000]= {1,1};

void fib_generate()
{
    for(int i=2;; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        if(fib[i]>4300000000)
            break;
    }
}

int main()
{
    fib_generate();
    long long n;
    while(cin>>n && n!=-1)
    {
        long long male_bee=0,total_bee;
        for(int i=0; i<n; i++)
            male_bee+=fib[i];
        total_bee=male_bee+fib[n];
        cout<<male_bee<<" "<<total_bee<<endl;
    }
    return 0;
}
