/**
*    author:  kkr0226
*    created: 14.05.2022 20:58:08
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vvi = vector<vector<int>>;
using vi = vector<int>;
using vvl = vector<vector<lli>>;
using vl = vector<lli>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  lli n,w;
  cin>>n>>w;

  lli x[n];
  rep(i,n){
    cin>>x[i];
  }
  lli sum;
  lli ans=0;
  bool dp[w+10]={false};
    rep(i,n){
      if(x[i]<=w){
        dp[x[i]]=true;
      }
    }
    
  if(n>=2){
    rep(i,n-1){
      rep2(j,i+1,n){
        //cout<<j<<endl;
        sum=x[i]+x[j];
        if(sum<=w){
          dp[sum]=true;
        }
      }
    }
  }
  
  if(n>=3){
    rep(i,n-2){
      rep2(j,i+1,n-1){
        rep2(k,j+1,n){
          sum=x[i]+x[j]+x[k];
          if(sum<=w){
            dp[sum]=true;
          }
        }
      }
    }
  }
  rep(i,w+1){
    if(dp[i]){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}