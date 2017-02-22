#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,k,m,price;
    char c;
    cin>>n;
    while(n--)
    {
        map<char,int>mp;
        map<char,int>mp1;
        vector<char>v;
        string str;
        long int sum=0;
        double ans=0;
        cin>>k;
        getchar();
        while(k--)
        {
            cin>>c>>price;
            mp[c]=price;
            v.push_back(c);
        }
        cin>>m;
        getchar();
        while(m--)
        {
            getline(cin,str);
            for(int i=0;i<str.length();i++)
                    mp1[str[i]]++;
        }
        for(int i=0;i<v.size();i++)
            {
                sum+=(mp1[v[i]]*mp[v[i]]);
//                cout<<v[i]<<" "<<mp1[v[i]]<<" "<<mp[v[i]]<<endl;
            }
        ans=sum/100.0;
        printf("%.2lf$\n",ans);


    }
    return 0;
}
