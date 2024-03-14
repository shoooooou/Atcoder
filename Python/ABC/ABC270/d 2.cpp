/**
*    created: 24.09.2022 22:04:08
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
  lli n,k;
  cin>>n>>k;

  vl a(k);
  rep(i,k){
    cin>>a[i];
  } 

  sort(a.rbegin(),a.rend());
  lli ind=0;
  lli turn=1;
  lli ans=0;
  while(n!=0){
    if(a[ind]>n){
      ind++;
    }else{
      if(turn==1){
        ans+=a[ind];
      }
      n-=a[ind];
      turn*=(-1);
    }
    
  }
  cout<<ans<<endl;
  return 0;
}