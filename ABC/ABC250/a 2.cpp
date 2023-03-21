/**
*    author:  kkr0226
*    created: 08.05.2022 20:55:21
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
  lli x,y,r,c;
  cin>>x>>y>>r>>c;
  lli cnt=0;

  rep2(i,1,y+1){
    rep2(j,1,x+1){
      if(abs(c-i)+abs(r-j)==1) cnt++;
    }
  }
  cout<<cnt<<endl;

  return 0;
}