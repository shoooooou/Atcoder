/**
*    created: 14.05.2022 20:58:25
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
static bool contains_key(map<string,lli> m, string v)
{
    return m.find(v) != m.end(); // findを使ったいつものやつ
}

int main()
{
  lli n;
  cin>>n;
  set<string> sub;
  lli sub2[n+10]={-1};
  rep(i,n){
    string s;
    lli a;
    cin>>s>>a;
    if(sub.find(s)==sub.end()){
      sub.insert(s);
      sub2[i+1]=a;
    }
  }
  lli ans;
  lli aa=-INF;
  rep2(i,1,n+1){
    if(sub2[i]==-1) continue;
    if(sub2[i]>aa){
      aa=sub2[i];
      ans=i;
    }
  }
  cout<<ans<<endl;

  return 0;
}