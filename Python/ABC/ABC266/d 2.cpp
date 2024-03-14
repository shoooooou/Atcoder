/**
*    created: 27.08.2022 21:57:51
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
  lli n;
  cin>>n;
  vl t(n),x(n),a(n);
  rep(i,n){
    cin>>t[i]>>x[i]>>a[i];
  } 
  lli dp[100010][5]={0};
  if(t[0]==0&&x[0]==0){
    dp[0][0]=a[0];
  }
  for(lli i=1;i<=t[n-1];i++){
    rep(j,5){
      if(j>i) continue;
      lli ma=0;
      lli lef=0;
      lli rig=t.size()-1;
       lli mid;
      while(rig>=lef){
        mid =lef+(rig-lef)/2;
        if(t[mid]==i) break;
        else if (t[mid] > i) rig = mid - 1;
        else if (t[mid] < i) lef = mid + 1;
      }
      if(t[mid]==i&&x[mid]==j){
          ma=max(ma,a[mid]);
      }
      if(j==0){
        dp[i][0]=max(dp[i-1][0],dp[i-1][1])+ma;
      }else if(j==4){
        dp[i][4]=max(dp[i-1][3],dp[i-1][4])+ma;
      }else{
        lli big=max(dp[i-1][j-1],dp[i-1][j]);
        dp[i][j]=max(big,dp[i-1][j+1])+ma;
      }
    }  
  }
  lli ans=-INF;
  rep(i,5){
    ans=max(ans,dp[t[n-1]][i]);
  }
  cout<<ans<<endl;
  return 0;
}