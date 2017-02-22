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
    string s;
    int i=0;
    while(cin>>s && s[0]!='#')
    {
        i++;
        if(s=="HELLO")
            cout<<"Case "<<i<<": "<<"ENGLISH\n";
        else if(s=="HOLA")
            cout<<"Case "<<i<<": "<<"SPANISH\n";
        else if(s=="HALLO")
            cout<<"Case "<<i<<": "<<"GERMAN\n";
        else if(s=="BONJOUR")
            cout<<"Case "<<i<<": "<<"FRENCH\n";
        else if(s=="CIAO")
            cout<<"Case "<<i<<": "<<"ITALIAN\n";
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": "<<"RUSSIAN\n";
        else
            cout<<"Case "<<i<<": "<<"UNKNOWN\n";
    }
    return 0;
}
