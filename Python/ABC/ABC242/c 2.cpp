/**
*    created: 06.03.2022 03:42:42
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using graph = vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main()
{
  int n;
  cin>>n;
  int dp[n+1][10]={0};
  rep(i,10){
    dp[1][i]=1;
  }
  //cout<<"aslkfja;lj"<<endl;
  rep2(i,2,n+1){
    rep2(j,1,10){
      rep2(k,max(j-1,1),min(j+1,9)+1){
        dp[i][k]+=(dp[i-1][j]);
        dp[i][k]%=998244353;
      }
    }
  }


  int ans=0;
  rep2(i,1,10){
    //cout<<dp[n][i]<<endl;
    ans+=dp[n][i];
    ans%=998244353;
  }
  cout<<ans<<endl;
  return 0;
}