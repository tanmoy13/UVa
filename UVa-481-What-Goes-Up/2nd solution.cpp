/*
user: turing_13
link: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=422
*/
 
#include <bits/stdc++.h>
 
#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 100100
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,a) for(int i=0;i<a;i++)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int
 
using namespace std;
int print[1000000],L[1000000];
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    vector<int>v;
    v.pb(1000000);
    int num;
    while(cin>>num)
        v.pb(num);
 
    int sz=SZ(v);
    for(int i=1; i<sz; i++)
        print[i]=100000000;
    print[0]=-100000000;
 
    int ans=1;
    int length=0;
    for(int i=1; i<sz; i++)
    {
        int left=0,right=length;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(print[mid]<v[i])
                left=mid+1;
            else
                right=mid-1;
        }
        print[left]=v[i];
        if(left>length)
            length++;
        L[i]=left;
        ans=max(ans,L[i]);
    }
 
    int i;
    for(i=sz-1; i>0; i--)
        if(L[i]==ans)
            break;
 
    int ara[ans];
    int top=v[i],indx=ans;
    ara[--indx]=v[i];
 
    for(--i; i>0; i--)
        if(v[i]<top && L[i]==indx)
        {
            top=v[i];
            ara[--indx]=v[i];
        }
 
    cout<<ans<<endl<<'-'<<endl;
    for(i=0; i<ans; i++)
        cout<<ara[i]<<endl;
         
    return 0;
}
