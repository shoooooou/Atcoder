/**
*    created: 24.04.2022 20:57:06
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
lli czn(lli x){
  lli ans=0;
  if(x==0){
    return 1;
  }
  while(x!=1){
    if(x%2==0){
      ans++;
      x/=2;
    }else{
      break;
    }
  }
  return ans;
  
}
int main(){
  lli n;
  cin>>n;
  lli t[n];
  rep(i,n){
    cin>>t[i];
  }
  lli i=1;
  lli j=0;
  while(true){
    if(czn(i)==t[j]){
      if(j==n-1){
        cout<<i<<endl;
        cout<<pow(2,40)<<endl;
        return 0;
      }else{
        i++;
        j++;
      }
    }else{
      i++;
    }
  }
  
  return 0;
}