/**
*    author:  kkr0226
*    created: 20.02.2022 20:59:21
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int num,g;
    cin>>num>>g;
    vector<vector<int>> aa(num);
    rep(i,num){
        int a;
        cin>>a;
        aa[i].push_back(a);
        cin>>a;
        aa[i].push_back(a);
    }
    bool dp[num][10001];
    memset(dp,0,sizeof(dp));
    dp[0][aa[0][0]]=1;
    dp[0][aa[0][1]]=1;
    rep2(i,1,num){
            rep(k,g){
                if(dp[i-1][k]!=0){
                    dp[i][k+aa[i][0]]=1;
                    dp[i][k+aa[i][1]]=1;
                }
            }
    }
    if(dp[num-1][g]){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}