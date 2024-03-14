/**
*    created: 02.07.2022 22:10:53
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
  lli n,x;
  cin>>n>>x;
  vvl aa(2*100000+10,vl(3));
  rep(i,n){
    cin>>aa[i][0]>>aa[i][1];
    aa[i][2]=aa[i][0]+aa[i][1];
  } 
  

  return 0;
}