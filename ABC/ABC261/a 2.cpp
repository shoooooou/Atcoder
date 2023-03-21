/**
*    created: 23.07.2022 20:59:35
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
  lli l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  
  lli aa[110]={0};
  rep2(i,l1,r1+1){
    aa[i]++;
  }
  rep2(i,l2,r2+1){
    aa[i]++;
  }

  lli st=-1;
  rep(i,101){
    if(aa[i]==2){
      st=i;
      break;
    }
  }
  if(st==-1){
    cout<<0<<endl;
    return 0;
  }
  lli cnt=0;
  rep2(i,st+1,101){
    if(aa[i]==2){
      cnt++;
    }else{
      break;
    }
  }



  cout<<cnt<<endl;
  return 0;
}