/**
*    created: 20.08.2022 20:58:45
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
lli ketasuu(lli x){
  lli ans=1;
  while(true){
    x/=10;
    if(x==0) break;
    ans++;
  }
  return ans;
}
int main()
{
  lli n;
  cin>>n;
  vector<multiset<lli>> a(8);
  rep(i,n){
    lli aa;
    cin>>aa;
    a[ketasuu(aa)].insert(aa);
  }
  lli cnt=0;
  lli ans[3];
  
  for(lli i=7;i>=1;--i){
    auto itr=a[i].end();
    
    while(itr!=a[i].begin()){
      itr--;
      ans[cnt]=*itr;
      cnt++;
      if(cnt==3){
        break;
      }
    }
    if(cnt==3) break;
  }
  vector<string> v(3);
  rep(i,3){
    v[i]=to_string(ans[i]);
  }
  sort(v.rbegin(),v.rend());
  rep(i,3){
    cout<<v[i];
  }
  return 0;
}