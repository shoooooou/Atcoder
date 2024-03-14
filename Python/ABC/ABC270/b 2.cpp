/**
*    created: 24.09.2022 20:42:04
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
  lli x,y,z;
  cin>>x>>y>>z;
  lli ans=0;
  if(x>0){
    if(y>x ||y<0){
      cout<<x<<endl;
      return 0;
    }else{
      if(y<z){
        cout<<-1<<endl;
        return 0;
      }else{
        if(z>0){
          cout<<x<<endl;
          return 0;
        }else{
          ans=abs(z)*2+x;
          //cout<<z<<" "<<x<<endl;
          cout<<ans<<endl;
          return 0;
        }
      }
    }
  }else{
    if(y<x || y>0){
      cout<<abs(x)<<endl;
      return 0;
    }else{
      if(y>z){
        cout<<-1<<endl;
        return 0;
      }else{
        if(z<0){
          cout<<abs(x)<<endl;
          return 0;
        }else{
          ans=z*2+abs(x);
          cout<<ans<<endl;
          return 0;
        }
      }
    }
  }
  return 0;
}