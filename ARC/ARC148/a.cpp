/**
*    created: 11.09.2022 20:55:01
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
  rep(i,n){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  lli g=a[1]-a[0];
  rep2(i,1,n-1){
    g=__gcd(g,a[i+1]-a[i]);
  }
  
  if(g!=1){
    cout<<"1"<<endl;
  }else{
    cout<<"2"<<endl;
  }
  
  
  return 0;
}