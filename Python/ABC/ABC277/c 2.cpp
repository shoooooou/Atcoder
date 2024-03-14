/**
*    created: 12.11.2022 20:54:18
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
  vvl hasi(n,vl(2));
  lli a,b;
  rep(i,n){
    cin>>a>>b;
    if(a<b){
      hasi[i][0]=a;
      hasi[i][1]=b;
    }else{
      hasi[i][0]=b;
      hasi[i][1]=a;
    }
  }
  sort(hasi.begin(),hasi.end());
  // rep(i,n){
  //   cout<<hasi[i][0]<<" "<<hasi[i][1]<<endl;
  // }
  map<lli,lli> kai;
  kai[1]=1;
  lli ans=1;
  rep(i,n){  
    if(kai.count(hasi[i][0])!=0){
      kai[hasi[i][1]]=1;
      ans=max(ans,hasi[i][1]);
    }
    if(kai.count(hasi[i][1])!=0){
      kai[hasi[i][0]]=1;
      ans=max(ans,hasi[i][0]);
    }
  }
  
  
  cout<<ans<<endl;
  return 0;
}