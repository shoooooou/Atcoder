/**
*    created: 16.07.2022 20:57:23
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ull = unsigned long long;
using vvi = vector<vector<int>>;
using vi = vector<int>;
using vvl = vector<vector<lli>>;
using vl = vector<lli>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
lli keisan(lli x){
  lli sum=0;
  while(x!=0){
    lli amari=x%10;
    sum+=amari;
    x/=10;
  }
  return sum;
}
int main()
{
  lli n;
  cin>>n;

  lli m=2*n;
  cout<<m<<endl;
  string ans;
  while(true){
    if(n>=4){
      ans='4'+ans;
    }else if(n==3){
      ans='3'+ans;
      break;
    }else if(n==2){
      ans='2'+ans;
      break;
    }else if(n==1){
      ans='1'+ans;
      break;
    }else{
      break;
    }
    n-=4;
  }
  cout<<ans<<endl;
  return 0;
}