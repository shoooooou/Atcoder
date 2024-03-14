/**
*    created: 10.09.2022 20:46:58
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
  string s,t;
  cin>>s>>t;
  if(s==""){
    cout<<"Yes"<<endl;
    return 0;
  }
  if(s.length()>t.length()){
    cout<<"No"<<endl;
    return 0;
  }
  lli cnt=0;
  while(cnt!=(s.length())){
    if(s[cnt]!=t[cnt]){
      cout<<"No"<<endl;
      return 0;
    }
    cnt++;
  }
  cout<<"Yes"<<endl;
  return 0;
}