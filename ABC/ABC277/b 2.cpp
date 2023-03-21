/**
*    created: 12.11.2022 20:52:55
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
  string s;
  set<string> ans;
  rep(i,n){
    cin>>s;
    ans.insert(s);
  }
  if(ans.size()!=n){
    cout<<"No"<<endl;
    return 0;
  }
  rep(i,n){
    if(s[0] != 'H' &&s[0] != 'D' &&s[0] != 'C' &&s[0] != 'S' ){
      cout<<"No"<<endl;
      return 0;
    }
    if(s[1] != 'A' &&s[1] != '2' &&s[1] != '3' &&s[1] != '4' &&s[1] != '5' &&s[1] != '6' &&s[1] != '7' &&s[1] != '8' &&s[1] != '9' &&s[1] != 'T' &&s[1] != 'J' &&s[1] != 'Q' &&s[1] != 'K' ){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  return 0;
}