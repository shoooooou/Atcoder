/**
*    created: 14.05.2022 22:56:08
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
   lli n,w;
   cin>>n>>w;

   lli a[n];
   bool ans[w+10]={false};
   rep(i,n){
     cin>>a[i];
   }

   for(lli i=0;i<(1<<n);i++){
     lli sum=0;
     bitset<400> bs=i;
     if(bs.count()<=3){
      for(lli j=0; j<n;j++){
        if(i&(1<<j)){
          sum+=a[j];
        }
      }
      if(sum<=w && sum!=0){
        ans[sum]=true;
      }
     }
   }
   lli cnt=0;
   rep2(i,1,w+1){
     if(ans[i]){
       cnt++;
     }
   }
   cout<<cnt<<endl;
  return 0;
}