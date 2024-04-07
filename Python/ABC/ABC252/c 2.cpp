/**
*    created: 21.05.2022 20:54:32
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
  lli n;
  cin>>n;
  string s[n];
  rep(i,n){
    cin>>s[i];
  }
  int i=0;
  lli cnt=0;
  bool flag[n][10]={false};

  while(true){
    if(i==10){
      i=0;
    }
    rep(j,n){
      int ind=s[j][i]-'0';
      //cout<<ind<<" ";
      flag[j][ind]=true;
    }
    rep(j,10){
      rep(k,n){
        if(flag[k][j]){
          if(k==n-1){
            cout<<cnt<<endl;
            return 0;
          }
        }else{
          break;
        }
      }
    }
    cnt++;
    i++;
  }
  return 0;
}