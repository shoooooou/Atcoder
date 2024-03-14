/**
*    created: 30.07.2022 22:19:38
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
  lli n,a,b;
  cin>>n>>a>>b;
  lli make=0;
  if(n<a){
    cout<<0<<endl;
    return 0;
  }

  make+=a-1;
  if(a<b){
    cout<<n-make<<endl;
    return 0;
  } 
  lli ans=(n/a-1)*b;
  lli ans2=n%a;
  if(ans2<b){
    ans+=(ans2+1);
  }else{
    ans+=b;
  }
  cout<<ans<<endl;

  return 0;
}