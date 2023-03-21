/**
*    author:  kkr0226
*    created: 26.03.2022 20:58:47
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
  bool dp[2010];
  rep(i,2010){
    dp[i]=false;
  }
  int n;
  cin>>n;
  rep(i,n){
    int a;
    cin>>a;
    dp[a]=true;
  }
  int ind=0;
  bool flag=true;
  while(flag){
    if(!dp[ind]){
      cout<<ind<<endl;
      flag=false;
      return 0;
    }
    ind++;
  }

  return 0;
}