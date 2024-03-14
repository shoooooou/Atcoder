/**
*    created: 21.08.2022 21:56:40
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
  lli n,p,q,r;
  cin>>n>>p>>q>>r;

  lli a[n];
  lli sum[n+1]={0};
  rep(i,n){
    cin>>a[i];
  } 
  map<lli,int> cnt;
  cnt[0]++;
  rep2(i,1,n+1){
    sum[i]+=sum[i-1]+a[i-1];
    //cout<<sum[i]<<" ";
    cnt[sum[i]]++;
  }
  rep(i,n+1){
    if(cnt[sum[i]+p]==1){
      lli ind=sum[i]+p;
      if(cnt[ind+q]==1){
        ind+=q;
        if(cnt[ind+r]==1){
          cout<<"Yes"<<endl;
          return 0;
        }
      }
    }
  }
  cout<<"No"<<endl;
   

  return 0;
}