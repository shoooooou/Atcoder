/**
*    created: 19.11.2022 20:50:05
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
  lli n,k;
  cin>>n>>k;
  lli a[n];
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    if(k<n){

      cout<<a[k]<<" ";
    }else{
      cout<<"0 ";
    }
   k++;
  }
  return 0;
}