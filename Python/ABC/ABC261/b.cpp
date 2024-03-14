/**
*    created: 23.07.2022 20:59:42
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
  lli n;
  cin>>n;
  string hyou[n];
  rep(i,n){
    cin>>hyou[i];
  }

  rep(i,n){
    rep(j,n){
      if(i==j){
        if(hyou[i][j]!='-'){
          cout<<"incorrect"<<endl;
          return 0;
        }
      }
      if(hyou[i][j]=='D'){
        if(hyou[i][j]!=hyou[j][i]){
            cout<<"incorrect"<<endl;
            return 0;
        }
      }
      if(hyou[i][j]=='W'){
        if(hyou[j][i]!='L'){
            cout<<"incorrect"<<endl;
            return 0;
        }
      }
      if(hyou[i][j]=='L'){
        if(hyou[j][i]!='W'){
            cout<<"incorrect"<<endl;
            return 0;
        }
      }
    }
  }
  cout<<"correct"<<endl;
  return 0;
}