/**
*    created: 31.07.2022 21:42:52
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
lli waru=998244353;

int main()
{
  lli n;
  cin>>n;
  long double a[n+1];
  rep2(i,1,n+1){
    cin>>a[i];
  }
  long double  dp[n+1][n+1][n+1]={-1};
  long double  heikin;

  dp[0][0][0]=0;
  lli cnt=0;
  rep2(i,1,n+1){
    rep2(j,)
  }

  return 0;
}