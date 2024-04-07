/**
*    created: 02.04.2022 20:54:55
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
  double a,b,x,y;
  cin>>a>>b;
  if(a==0){
    x=0;
    y=1;
    cout<<x<<" "<<y;
    return 0;
  }
  if(b==0){
    x=1;
    y=0;
    cout<<x<<" "<<y;
    return 0;
  }
  double c=b/a;
  //cout<<c<<endl;
  x=sqrt(1/(1+(pow(b/a,2))));
  
  y=sqrt(1-(x*x));
  cout<<x<<" "<<y;
  return 0;
}