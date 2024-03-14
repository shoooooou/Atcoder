/**
*    created: 11.06.2022 23:22:23
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
   lli n,q;
   cin>>n>>q;

   lli cnt=0;
   rep(i,n){
     lli a;
     cin>>a;
     cnt+=a;
   }
   rep(i,q){
     lli x;
     cin>>x;
     x*=n;
     cout<<abs(x-cnt)<<endl;
   }
  return 0;
}