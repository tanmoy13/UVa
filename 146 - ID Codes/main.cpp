#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str && str !="#")
    {
        if(next_permutation(str.begin(),str.end()))
            cout<<str<<endl;
        else
            cout<<"No Successor"<<endl;
    }
    return 0;
}
