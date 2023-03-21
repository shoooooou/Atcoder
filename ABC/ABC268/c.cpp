/**
*    created: 10.09.2022 20:47:08
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
  lli cnt[n]={0};
  
  rep(i,n){
    lli ryouri;
    cin>>ryouri;
    set<lli> aa;
    aa.insert(ryouri);
    aa.insert((ryouri-1)%n);
    aa.insert((ryouri+1)%n);
    auto itr=aa.begin();
    while(itr!=aa.end()){
      if(*itr<=i){
        cnt[i-*itr]++;
      }else{
        cnt[i+n-*itr]++;
      }
      itr++;
    }
    
  }
  lli ans=-INF;
  rep(i,n){
    ans=max(ans,cnt[i]);
  }

  cout<<ans<<endl;
  return 0;
}