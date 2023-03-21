/**
*    created: 31.07.2022 20:57:05
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

  vvl gr(n+1);
  rep(i,m){
    lli a,b;
    cin>>a>>b;
    gr[a].push_back(b);
    gr[b].push_back(a);
  }
  lli hoge1,hoge2;
  set<tuple<lli,lli,lli>> ans;
  vl hoge(3);
  tuple<lli,lli,lli> aa;
  rep2(i,1,n+1){
    for(lli j=0;j<gr[i].size();++j){
      for(lli k=0;k<gr[gr[i][j]].size();++k){
        lli ind=gr[gr[i][j]][k];
        for(lli l=0;l<gr[ind].size();l++){
          if(i==gr[ind][l]){
            hoge[0]=i;
            hoge[1]=gr[i][j];
            hoge[2]=gr[gr[i][j]][k];
            sort(hoge.begin(),hoge.end());
            aa=make_tuple(hoge[0],hoge[1],hoge[2]);
            ans.insert(aa);
          }
        }

      }
    }
  }
  cout<<ans.size()<<endl;
  return 0;
}