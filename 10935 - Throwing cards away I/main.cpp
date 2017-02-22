#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <map>

using namespace std;

int main()
{
    long long j,k,n;
    queue < int > cards;
    while(cin>>n && n!=0)
    {

        if(n==1)
        {
           cout<<"Discarded cards:\n";
           cout<<"Remaining card: 1\n";
           continue;
        }
        for(int i=1;i<=n;i++)
        {
            cards.push(i);
        }
        cout<<"Discarded cards: ";
        while(cards.size())
        {
            cout<<cards.front();
            cards.pop();
            cards.push(cards.front());
            cards.pop();
            if(cards.size()==1)
                break;
            cout<<", ";
        }
        cout<<endl;
        cout<<"Remaining card: "<<cards.front()<<"\n";
        cards.pop();
    }
    return 0;
}
