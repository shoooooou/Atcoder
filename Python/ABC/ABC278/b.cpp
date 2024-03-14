/**
*    created: 19.11.2022 20:50:14
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
  lli h,m;
  cin>>h>>m;
  lli a,b,c,d;
  a=h/10;
  b=h%10;
  c=m/10;
  d=m%10;
  lli timeh,timem;
  while(true){
    timeh=10*a+c;
    timem=10*b+d;
    if(0<=timeh&&timeh<=23&&0<=timem&&timem<=59){
      cout<<10*a+b<<" "<<10*c+d<<endl;
      return 0;
    }
    timeh=10*a+b;
    timem=10*c+d;
    if(d<9){
      d++;
    }else{
      d=0;
      if(c<5){
        c++;
      }else{
        c=0;
        if(timeh==23){
          a=0;
          b=0;
        }else if(b<9){
          b++;
        }else{
          b=0;
          a++;
        }
      }
    }
  }
  return 0;
}