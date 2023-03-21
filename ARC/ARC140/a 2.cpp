/**
*    author:  kkr0226
*    created: 15.05.2022 23:58:27
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
   lli n,k;
   cin>>n>>k;

   string s;
   cin>>s;

   rep2(i,1,n){
     if(n%i!=0) continue;
     lli cnt[n/i][26]={0};
     lli cntall=0;
     rep2(j,0,n/i){
       for(int k=j;j<n;j+i){
         cnt[j][s[k]-'a']++;
       }
     }
     lli max=0;
     lli sum=0;
     rep2(j,0,n/i){
       rep(k,26){
         if(max<=cnt[j][k]) max=cnt[j][k];
         sum+=cnt[j][k];
       }
       cntall+=(sum-max);
       sum=0;
       max=0;
     }
     if(cntall<=k){
       cout<<i<<endl;
       return 0;
     }
   }
  return 0;
}