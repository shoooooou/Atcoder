/**
*    created: 15.10.2022 20:57:24
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
  lli x,k;
  cin>>x>>k;
  rep(i,k){
    lli waru=pow(10,i+1);
    //cout<<x%waru<<" "<<waru<<endl;
    if(x%waru >= 5*waru/10){
      x+=(waru-(x%waru));
    }else{
      x-=(x%waru);

    }
  }
  cout<<x<<endl;
  return 0;
}