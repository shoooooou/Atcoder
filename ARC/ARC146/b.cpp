/**
*    created: 20.08.2022 20:58:55
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
  lli m;
  lli k;
  cin>>n>>m>>k;
  vl a(n);
  rep(i,n){
    cin>>a[i];
  }
  sort(a.rbegin(),a.rend());
  if(k==1){
    cout<<a[0]+m<<endl;
    return 0;
  }
  for(lli i=0;i<n-k;i++){
    lli cnt=1;
    lli kazu=m;
    bool flag=true;
    while(cnt!=k){
      if()
    }

  }

  return 0;
}