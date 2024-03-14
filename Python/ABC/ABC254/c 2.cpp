/**
*    created: 04.06.2022 20:59:09
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
  lli k;
  cin>>k;
  if(k==1){
    cout<<"Yes"<<endl;
    return 0;
  }
  vl a(n);
  vvl b(k);
  rep(i,n){
    cin>>a[i];
    b[i%k].push_back(a[i]);
  }
  rep(i,k){
    sort(b[i].rbegin(),b[i].rend());
  }
    sort(a.begin(),a.end());
    vl ans(n);
    rep(i,n){
      ans[i]=b[i%k].back();
      b[i%k].pop_back();
    }
    if(ans==a) cout<<"Yes"<<endl;
    else cout<<"No"<<endl; 
  return 0;
}