/**
*    created: 12.03.2022 20:55:44
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
  lli n;
  cin>>n;
  lli a[n];
  lli b[n];

  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    cin>>b[i];
  }

  lli cnt1=0;
  lli cnt2=0;
  rep(i,n){
    if(a[i]==b[i]){
      cnt1++;
    }
  }
  cout<<cnt1<<endl;

  rep(i,n){
    rep2(j,0,n){
      if(i==j) continue;
      if(a[i]==b[j]){
        cnt2++;
      }
    }
  }
  cout<<cnt2<<endl;
  return 0;
}