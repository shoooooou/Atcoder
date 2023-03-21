/**
*    author:  kkr0226
*    created: 19.03.2022 23:05:04
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
  lli n;
  cin>>n;
  lli a[n];
  lli cnt0=0,cnt1=0;
  lli b[n];
  rep(i,n){
    cin>>a[i];
    if(a[i]==0){
      b[i]=1;
      cnt0++;
    }else{
      b[i]=-1;
      cnt1++;
    }
  } 
  lli sum[n+1]={0};
  rep2(i,1,n+1){
    sum[i]=sum[i-1]+b[i-1];
    //cout<<sum[i]<<" ";
  }
   //cout<<endl;
  lli max=0;
  lli min=0;
  rep2(i,1,n+1){
    rep2(j,0,i){
      //cout<<sum[i]<<" "<<sum[j]<<endl;
      lli num=sum[i]-sum[j];
      
      if(num>=max){
        // cout<<num<<endl;
        max=num;
      }
      if(num<=min){
        min=num;
      }
    }
  }
  lli ans=max-min+1;
  //cout<<max<<" "<<min<<endl;
  cout<<ans<<endl;
  
  return 0;
}