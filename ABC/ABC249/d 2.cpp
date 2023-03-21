/**
*    author:  kkr0226
*    created: 23.04.2022 20:52:04
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
  vl a(n);
  lli dp2[200020]={0};
  rep(i,n){
    cin>>a[i];
    dp2[a[i]]++;
  }
  lli ans=0;
  rep2(i,1,200001){
    for(int j=1;j*i<=200000;j++){
      ans+=dp2[i]*dp2[j]*dp2[i*j];
    }
  }
  cout<<ans<<endl;
  

  return 0;
}