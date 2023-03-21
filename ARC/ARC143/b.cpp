/**
*    created: 26.06.2022 22:25:32
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
lli waru=998244353;
int main()
{
   lli n;
   cin>>n;
   lli ans=1;
   for(lli i=n*n;i>=1;i--){
    ans=(ans%waru)*i;
   }
   cout<<ans<<endl;
  return 0;
}