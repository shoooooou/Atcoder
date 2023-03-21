/**
*    created: 15.10.2022 20:57:34
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
  vl a(n);
  set<lli> b;
  lli ans[n]={0};
  rep(i,n){
    cin>>a[i];
    b.insert(a[i]);
  }
  map<lli,lli> aa;
  auto itr=b.begin();
  lli ind=0;
  while(itr!=b.end()){
    ind++;
    aa[*itr]=ind;
    itr++;
  }
  rep(i,n){
    ans[ind-aa[a[i]]]++;
  }
  rep(i,n){
    cout<<ans[i]<<endl;
  }
  return 0;
}