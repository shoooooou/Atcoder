/**
*    author:  kkr0226
*    created: 28.05.2022 21:48:13
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
  lli n,a,b;
  cin>>n>>a>>b;
  lli ans=0;
  rep2(i,1,n+1){
    if(i%a!=0&&i%b!=0){
      ans+=i;
    }
  }
  cout<<ans<<endl;
  return 0;
}