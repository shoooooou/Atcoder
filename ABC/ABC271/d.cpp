/**
*    created: 01.10.2022 22:17:13
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
  lli n,s;
  cin>>n>>s;
  lli a[n][2];
  rep(i,n){
    cin>>a[i][0]>>a[i][1];
  }
  lli dp[n+1][10010]={0};
  string dp2[n+1][10010]={""};
  dp[0][0]=1;
  rep(i,n){
    rep(j,10001){
      if(dp[i][j]==1){
        if(dp[i+1][j+a[i][0]]==0){
          dp[i+1][j+a[i][0]]=1;
          dp2[i+1][j+a[i][0]]+=dp2[i][j]+"H";
        }
        if(dp[i+1][j+a[i][1]]==0){
          dp[i+1][j+a[i][1]]=1;
          dp2[i+1][j+a[i][1]]=dp2[i][j]+"T";
        }
      }
    }
  }
  if(dp[n][s]==1){
    cout<<"Yes"<<endl;
    cout<<dp2[n][s]<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}