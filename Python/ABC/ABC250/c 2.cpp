/**
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
  lli n,q;
  cin>>n>>q;
  vl xx(n+10);
  vl xi(n+10);
  rep2(i,1,n+1){
    xx[i]=i;
    xi[i]=i;
  }
  lli op;
  rep(i,q){
    lli ind1,ind2;
    cin>>op;
    if(xi[op]==n){
      ind1=xi[op];
      ind2=xi[op]-1;
      swap(xi[xx[ind1]],xi[xx[ind2]]);
      swap(xx[ind1],xx[ind2]);
    }else{
      ind1=xi[op];
      ind2=xi[op]+1;
      swap(xi[xx[ind1]],xi[xx[ind2]]);
      swap(xx[ind1],xx[ind2]);
    }
    // rep2(i,1,n+1){
    //   cout<<xx[i]<<" ";
    // }
    // cout<<endl;
  }
  rep2(i,1,n+1){
    cout<<xx[i]<<" ";
  }
  return 0;
}