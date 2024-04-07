/**
*    created: 20.03.2022 21:42:51
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
lli ans=0;
lli waru=998244353;
void dfs(lli s,lli t,lli k,lli x,lli cnt,vvl &g,lli flag){
  for(lli next:g[s]){
    cnt++;
    if(cnt==k+1){
      if(flag==1&&next==t){
        ans++;
        ans=ans%waru;
        break;
      }else{
        break;
      }
    }
    if(next==x){
      flag*=-1;
    }
    dfs(next,t,k,x,cnt,g,flag);
    cnt--;

  }
}
int main()
{
  lli n,m,k,s,t,x;
  cin>>n>>m>>k>>s>>t>>x;
  vvl g(n);
  rep(i,m){
    lli a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  dfs(s,t,k,x,1,g,1);
  cout<<ans<<endl;

  return 0;
}