/**
*    author:  kkr0226
*    created: 09.04.2022 20:57:21
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
  lli n,k;
  cin>>n>>k;
  vl a(n);
  rep(i,n){
    cin>>a[i];
  }
  lli mi=INF;
  rep(i,k){
    // cout<<mi<<" "<<a[i]<<endl;
    mi=min(mi,a[i]);
  }
  //cout<<mi<<endl;
  bool flag=true;
  rep2(i,k,n){
    if(mi<a[i]){
      flag=false;
    }
  }
  if(flag){
    cout<<-1<<endl;
    return 0;
  }
  lli ans=INF;
  lli ind;
  rep2(i,k,n){
    if(a[i]>mi){
      for(int j=k-1;j>=0;j--){
        if(a[i]>a[j]){
          ind=i-j;
          ans=min(ans,ind);
          break;
        }
      }
    }
  }
  cout<<ans<<endl;
  

  return 0;
}