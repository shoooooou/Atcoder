/**
*    created: 06.08.2022 20:56:45
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
  lli n;
  cin>>n;
  vl p(n+2);
  rep2(i,2,n+1){
    cin>>p[i];
  }
  lli cnt=0;
  lli ind=n;
  while(true){
    cnt++;
    ind=p[ind];
    if(ind==1){
      cout<<cnt<<endl;
      return 0;
    }
  }

  return 0;
}