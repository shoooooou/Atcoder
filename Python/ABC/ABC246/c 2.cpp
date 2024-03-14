/**
*    author:  kkr0226
*    created: 02.04.2022 20:55:10
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
  lli n,k,x;
  cin>>n>>k>>x;
  vl a(n);
  rep(i,n){
    cin>>a[i];
  }
  sort(a.rbegin(),a.rend());
  lli cnt=0;
  rep(i,n){
    lli waru=a[i]/x;//枚数
    if(k>=waru){
      a[i]=a[i]%x;
      k-=waru;
      if(k==0){
        break;
      }
    }else{
      a[i]-=k*x;
      k=0;
      break;
    }
  }
  sort(a.rbegin(),a.rend());
  if(k>0){
    rep(i,min(k,n)){
      a[i]=0;
    }
  }
  lli sum=0;
  rep(i,n){
    sum+=a[i];
  }
  cout<<sum<<endl;



  return 0;
}