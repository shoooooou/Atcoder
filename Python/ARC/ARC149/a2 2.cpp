/**
*    created: 02.10.2022 22:04:28
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
  lli zyougen=m;
  bool flagketa=false;
  while(to_string(m).size()<to_string(zyougen).size()*2 &&to_string(m).size()<n+1){
    char hikaku=to_string(m)[0];
    bool flag=true;
    rep(i,to_string(m).size()){
      if(to_string(m)[i]!=hikaku){
        flag=false;
        break;
      }
    }
    if(flag){
      if(to_string(m)[0]=='1'){
        m*=9;
      }else if(to_string(m)[0]=='2'){
        m*=4;
      }else if(to_string(m)[0]=='3'){
        m*=3;
      }else if(to_string(m)[0]=='4'){
        m*=2;
      }
      flagketa=true;
      break;
    }
    m+=zyougen;
  }
  if(!flagketa){
    cout<<-1<<endl;
    return 0;
  }
  lli hiku=n;
  while(hiku>=to_string(m).size()){
    //cout<<hiku<<"aaaa"<<endl;
    cout<<m;
    hiku-=to_string(m).size();
  }
  return 0;
}