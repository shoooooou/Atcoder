/**
*    created: 11.06.2022 20:58:51
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
  lli x,a,d,n;
  cin>>x>>a>>d>>n;

  lli koulas=a+(n-1)*d;
  bool flag1;
  if(abs(x-a)<abs(x-koulas)){
    flag1=true;
  }else{
    flag1=false;
  }

  if(flag1){
    if(d>=0){
      if(a>=x){
        cout<<abs(x-a)<<endl;
        return 0;
      }
      lli hikaku1,hikaku2;

      while(true){
        cout<<a<<endl;
        a+=d;
        if(a>=x){
          hikaku1=a-d;
          hikaku2=a;
          cout<<min(abs(x-hikaku1),abs(x-hikaku2))<<endl;
          return 0;
        }
      }
    }else{
      if(a<=x){
        cout<<abs(x-a)<<endl;
        return 0;
      }
      lli hikaku1,hikaku2;

      while(true){
        a+=d;
        if(a<=x){
          hikaku1=a-d;
          hikaku2=a;
          cout<<min(abs(x-hikaku1),abs(x-hikaku2))<<endl;
          
          return 0;
        }
      }

    }
  }else{
    if(d>=0){
      if(koulas<=x){
        cout<<abs(x-koulas)<<endl;
        return 0;
      }
      lli hikaku1,hikaku2;
      while(true){
        koulas-=d;
        if(koulas<=x){
          hikaku1=koulas+d;
          hikaku2=koulas;
          cout<<min(abs(x-hikaku1),abs(x-hikaku2))<<endl;
          return 0;
        }
      }
    }else{
      if(koulas>=x){
        cout<<abs(x-koulas)<<endl;
        return 0;
      }
      lli hikaku1,hikaku2;
      while(true){
        koulas-=d;
        if(koulas>=x){
          hikaku1=koulas+d;
          hikaku2=koulas;
          cout<<min(abs(x-hikaku1),abs(x-hikaku2))<<endl;
          return 0;
        }
      }
    }


  }
  
  return 0;
}