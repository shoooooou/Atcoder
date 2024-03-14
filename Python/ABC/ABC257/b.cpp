/**
*    created: 25.06.2022 21:08:44
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
  lli n,k,q;
  cin>>n>>k>>q;
  vl mas(n+1,0);
  rep2(i,0,k){
    lli a;
    cin>>a;
    mas[a]=i+1;
  }
  rep2(i,0,q){
    lli a;
    cin>>a;
    lli x=1;
    while(true){
      if(mas[x]==a){
        break;
      }
      x++;
    }
    if(x<n){
      if(mas[x+1]==0){
        mas[x+1]=mas[x];
        mas[x]=0;
      }
    }
  }


  rep2(i,1,n+1){
    if(mas[i]!=0){
      cout<<i<<" ";
    }
  }
  return 0;
}