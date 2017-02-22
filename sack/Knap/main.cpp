#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int weight[100]={1,7,4,3,4},cost[100]={120,400,280,150,200},dp[100][10000],cap=8;

int call(int i,int w) {
    printf("%d %d\n",i,w);
    if(i==5) return 0;
    if(dp[i][w]!=-1){
        puts("return from DP");
        return dp[i][w];
    }
    int p1,p2;
    if(weight[i]+w<=cap){
        printf("%d %d\n",i+1,w+weight[i]);
        p1 = cost[i]+call(i+1,w+weight[i]);
//        cout<<i+1<<" "<<w+weight[i]<<endl;
    }
    else p1 = 0;
    printf("%d %d\n",i+1,w);
    p2 = call(i+1,w);
    dp[i][w] = max(p1,p2);
    return dp[i][w];
}

int main() {
    memset(dp,-1,sizeof dp);
    cout<<call(0,0)<<endl;
    return 0;
}
