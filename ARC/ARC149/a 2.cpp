/**
*    created: 02.10.2022 20:44:43
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
  if(to_string(m).size()>=n+1){
    cout<<-1<<endl;
    return 0;
  }
  lli hikaku=0;
  rep(i,to_string(m).size()){
    hikaku*=10;
    hikaku++;
  }
  lli zoro=-INF;
  lli last=(n+1)-to_string(m).size();
  last=min((lli)100,last);
  rep(i,last){
    if(i==1){
      hikaku*=10;
      hikaku++;
    }
    lli hikaku2;
    rep2(j,1,10){
      hikaku2=hikaku*j;
      if(hikaku2%m==0){
        zoro=hikaku2;
      }
    }
  }
  if(zoro<0){
    cout<<-1<<endl;
  }else{
    lli hiku=n;
    while(hiku>=to_string(zoro).size()){
    //cout<<hiku<<"aaaa"<<endl;
      cout<<zoro;
      hiku-=to_string(zoro).size();
    }
  }
  return 0;
}