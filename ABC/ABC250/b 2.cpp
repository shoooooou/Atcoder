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
  lli n,a,b;
  cin>>n>>a>>b;
  bool flag=true;
  if(n==1){
      rep(j,a){
        rep(k,b){
          cout<<".";
        }
        cout<<endl;
      }
      return 0;
  }

  rep(i,n){
    rep(j,a){
      if(i%2==0){
        flag=true;
      }else{
        flag=false;
      }
      rep(k,n){
        rep(l,b){
          if(flag){
            cout<<".";
          }else{
            cout<<"#";
          }
        }
        if(flag){
          flag=false;
        }else{
          flag=true;
        }
      }
      cout<<endl;
    }
  }
  
  return 0;
}