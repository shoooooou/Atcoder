/**
*    author:  kkr0226
*    created: 02.04.2022 20:55:22
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
  lli a=0,b=0;
  
  rep(i,pow(10,6)+10){
    rep2(j,i,pow(10,6)+10){
    lli ans=a*a*a*a*a-2*b*a*a*a;
    if(ans>=n){
      cout<<ans<<endl;
      return 0;
    }
    }
  }
  return 0;
}