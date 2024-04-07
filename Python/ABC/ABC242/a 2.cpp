/**
*    created: 05.03.2022 20:58:18
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using graph = vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  double a,b,c,x,ans;
  cin>>a>>b>>c>>x;
  if(x<=a){
    cout<<1.000000000000<<endl;
    return 0;
  }
  if(x>b){
    cout<<0<<endl;
    return 0;
  }
  cout<<c/(b-a)<<endl;

  return 0;
}