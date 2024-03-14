/**
*    created: 17.12.2022 20:58:53
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
  lli n,m;
  cin>>n>>m;

  string s[n];
  rep(i,n){
    cin>>s[i];
  }
  lli ans=0;
  rep(i,n-1){
    rep2(j,i+1,n){
      rep(k,m){
        if(s[i][k] == 'x'&& s[j][k] == 'x'){
          break;
        }
        if(k==m-1){
          ans++;
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}