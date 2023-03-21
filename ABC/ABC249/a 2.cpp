/**
*    author:  kkr0226
*    created: 23.04.2022 20:51:40
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
  lli a,b,c,d,e,f,x;
  cin>>a>>b>>c>>d>>e>>f>>x;
  lli x2=x;
  lli sum1,sum2;
  sum1=0;
  sum2=0;

  while(true){
    if(x>a){
      sum1+=a*b;
      x-=a;
    }else{
      sum1+=x*b;
      break;
    }
    if(x>c){
      x-=c;
    }else{
      break;
    }
  }
  while(true){
    if(x2>d){
      sum2+=d*e;
      x2-=d;
    }else{
      sum2+=x2*e;
      break;
    }
    if(x2>f){
      
      x2-=f;
    }else{
      break;
    }
  }
  if(sum1>sum2){
    cout<<"Takahashi"<<endl;
  }else if(sum1==sum2){
    cout<<"Draw"<<endl;
  }else{
    cout<<"Aoki"<<endl;

  }

  return 0;
}