/**
*    created: 24.09.2022 20:42:13
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
vl ans;
bool seen[2*100010];
bool dfs(vvl &tr,lli v,lli goal){
  seen[v]=true;
  if(v==goal){
    ans.push_back(goal);
    return true;
  }
  for(auto next :tr[v]){
    if(seen[next]) continue;
    bool flag=dfs(tr,next,goal);
    if(flag){
      ans.push_back(v);
      return true;
    }
  }
  return false;
}
int main()
{
  lli n,x,y;
  cin>>n>>x>>y;
  vvl tr(n);
  rep(i,n-1){
    lli a,b;
    cin>>a>>b;
    tr[a].push_back(b);
    tr[b].push_back(a);
  }
  dfs(tr,x,y);
  
  for(lli i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
  }

  return 0;
}