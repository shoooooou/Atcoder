/**
*    created: 21.08.2022 22:17:43
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
map<pair<lli,lli>,int> seek;
lli ans=0;
lli waru=998244353;
lli a,b,c,d,e,f;
lli count(lli x,lli y,lli caisuu,lli zyougen,map<pair<lli,lli>,int> &shougai,map<pair<lli,lli>,int> &seek){
    if(seek[make_pair(x,y)]!=0){
      return 0;
    }
    seek[make_pair(x,y)]++;
    
}

int main()
{
   lli n,m;
   cin>>n>>m;

   cin>>a>>b>>c>>d>>e>>f;

   map<pair<lli,lli>,int> shougai;
   rep(i,m){
    lli x,y;
    cin>>x>>y;
    shougai[make_pair(x,y)]++;
   }

  return 0;
}