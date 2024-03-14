/**
*    created: 23.07.2022 21:38:03
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ull = unsigned long long;
using vvi = vector<vector<int> >;
using vi = vector<int>;
using vvl = vector<vector<lli> >;
using vl = vector<lli>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  lli n,m;
  cin>>n>>m;
  vvl dp(5010,vl(5010,0));
  lli x[n+1];
  lli c[5010]={0};
  rep2(i,1,n+1){
    cin>>x[i];
  }
  rep2(i,1,m+1){
    lli a,b;
    cin>>a>>b;
    c[a]=b;
  }
  dp[1][1]=x[1]+c[1];
  
  rep2(i,1,n+1){
    rep2(j,0,5001){
      if(dp[i][j]>0){
        dp[i+1][j+1]=dp[i][j]+x[i+1]+c[j+1];
        dp[i+1][0]=max(dp[i+1][0],dp[i][j]);
      }
    }
  }
  lli ans=-INF;
  rep(i,5001){
    ans=max(ans,dp[n][i]);
  }
  cout<<ans<<endl;
  return 0;
}