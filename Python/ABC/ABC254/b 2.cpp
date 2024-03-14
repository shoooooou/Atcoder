/**
*    created: 04.06.2022 20:58:52
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
  lli n;
  cin>>n;
  vvl a(n);
  rep(i,n+1){
    rep(j,i){
      if(j==0){
        a[i].push_back(1);
      }else if(j==i-1){
        a[i].push_back(a[i-1][j-1]);
      }
      else{
        lli ins=a[i-1][j-1]+a[i-1][j];
        a[i].push_back(ins);
      }
    }
  }
  cout<<a[3][2]<<endl;
  rep(i,n+1){
    rep(j,a[i].size()){
      
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}