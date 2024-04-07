/**
*    created: 12.03.2022 22:19:49
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using graph = vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

lli seen[310][310]={0};

lli dfs(lli x,vector<vector<int>>){
  
}


int main()
{
   lli n,m;
  cin>>n>>m;

  vector<vector<lli>> g(m);
  rep(i,m){
    int x,y,z;
    cin>>x,y,z;
    g[i].push_back(x);
    g[i].push_back(y);
    g[i].push_back(z);
  }


  return 0;
}