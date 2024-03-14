/**
*    created: 16.07.2022 20:57:30
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ull = unsigned long long;
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
  lli n,a,b;
  cin>>n>>a>>b;

  vl aa(n);
  lli mx=INF;
  rep(i,n){
    cin>>aa[i];
  }
  sort(aa.begin(),aa.end());
  while(true){
    lli sabun=aa[aa.size()-1]-aa[0];
    rep(i,n){
      cout<<aa[i]<<" ";
    }
    cout<<endl;
    if(sabun<=(a+b)){
      break;
    }
    sabun/=(a+b);
    aa[0]+=(sabun*a);
    aa[aa.size()-1]-=(sabun*b);
    sort(aa.begin(),aa.end());
  }
  cout<<aa[0]<<endl;
  return 0;
}