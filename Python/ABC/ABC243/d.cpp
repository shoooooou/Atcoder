/**
*    created: 12.03.2022 20:56:01
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
int main()
{
  lli n,x;
  cin>>n>>x;
  string q;
  cin>>q;
  lli cnt=0;
  rep(i,n){
    if(q[i]=='U'){
      if(cnt>0){
        cnt--;
      }else{
        x/=2;
      }
      
    }
    if(q[i]=='R'){
      if(1LL*pow(10,18)/2-1<x){
        cnt++;
      }else{
        x=x*2+1;
      }
      
    }
    if(q[i]=='L'){
      if(1LL*5*pow(10,18)/2<x){
        cnt++;
      }else{
        x=x*2;
      }
    }

  }
  cout<<x<<endl;
  return 0;
}