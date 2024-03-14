/**
*    created: 27.08.2022 20:59:26
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
lli waru=998244353;
int main()
{
  lli n;
  cin>>n;

  if(n<waru && n>=0){
    cout<<n<<endl;
    
  }else if(n>-waru && n<0){
    cout<<waru+n<<endl;
   
  }else if(n>=waru){
    cout<<n%waru<<endl;
  }else{
    if(abs(n)%waru==0){
      cout<<0<<endl;
    }else{
     cout<<waru-(abs(n)%waru)<<endl;
    }
  }
  
  return 0;
}