/**
*    created: 19.03.2022 20:56:18
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
  lli a[n];
  rep(i,n){
    cin>>a[i];
  }
  lli ans=n+1;
  bool flag=false;
  if(n<=2){
    cout<<n+1<<endl;
    return 0;
  }
  lli ind=0;
  while(true){
    if(a[ind]!=a[ind+1]){
      rep2(i,ind+2,n){
        if(a[ind]==a[i]){
          ind=i;
          ans--;
          flag=true;
          break;
        }
        if(i==n-1){
          cout<<n+1<<endl;
          return 0;
        }
      }
      if(flag) break;
    }
    if(ind==n-2){
      cout<<n+1<<endl;
      return 0;
    }
    ind++;
  }
  rep2(i,ind,n-1){
    if(a[i]!=a[i+1]){
      ans--;
    }
  }
  cout<<ans<<endl;
  return 0;
}