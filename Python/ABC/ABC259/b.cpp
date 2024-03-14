/**
*    created: 09.07.2022 20:57:23
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
int main()
{
  long double a,b;
  lli d;
  cin>>a>>b>>d;
  long double dosuu=d*(M_PI/180);
  //cout<<dosuu<<endl;
  long double x,y;
  x=cos(dosuu)*a+(-sin(dosuu)*b);
  y=sin(dosuu)*a+(cos(dosuu)*b);
  cout<<setprecision(14)<<x<<" "<<setprecision(14)<<y<<endl;
  return 0;
}