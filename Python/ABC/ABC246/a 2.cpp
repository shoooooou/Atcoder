/**
*    author:  kkr0226
*    created: 02.04.2022 20:54:45
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
  lli x[4];
  lli y[4];
  rep(i,3){
    cin>>x[i]>>y[i];
  }
  if(x[0]==x[1]){
    cout<<x[2]<<" ";
  }else if(x[1]==x[2]){
    cout<<x[0]<<" ";
  }else{
    cout<<x[1]<<" ";
  }
  if(y[0]==y[1]){
    cout<<y[2];
  }else if(y[1]==y[2]){
    cout<<y[0];
  }else{
    cout<<y[1];
  }

  return 0;
}