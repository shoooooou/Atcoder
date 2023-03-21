/**
*    created: 06.08.2022 21:57:44
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
   lli n,l,r;
   cin>>n>>l>>r;
   vl a(n);
   lli sum=0;
   rep(i,n){
    cin>>a[i];
    sum+=a[i];
   }
   vl sum1(n+1,0);
   vl sum2(n+1,0);
   rep2(i,1,n+1){
      sum1[i]=sum1[i-1]+l-a[i-1];
      sum2[i]=sum2[i-1]+r-a[n-i];
   }
  
   lli mi=INF;
   rep(i,n+1){
    rep(j,n+1-i){
      if(mi>sum1[i]+sum2[j]){
        mi=sum1[i]+sum2[j];
      }
    }
   }

    
   cout<<sum+mi<<endl;

  return 0;
}