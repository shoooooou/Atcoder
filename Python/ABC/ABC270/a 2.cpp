/**
*    created: 24.09.2022 20:41:56
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
  lli a,b;
  cin>>a>>b;

  lli cnt[8]={-1};
  if(a==0){
    cnt[0]=1;
  }else if(a==1){
    cnt[1]=1;
  }else if(a==2){
    cnt[2]=1;
  }
  else if(a==3){
    cnt[1]=1;
    cnt[2]=1;
  }else if(a==4){
    cnt[4]=1;
  }
  else if(a==5){
    cnt[1]=1;
    cnt[4]=1;
  }else if(a==6){
    cnt[2]=1;
    cnt[4]=1;
  }else if(a==7){
    cnt[2]=1;
    cnt[4]=1;
    cnt[1]=1;
  }
  if(b==0){
    cnt[0]=1;
  }else if(b==1){
    cnt[1]=1;
  }else if(b==2){
    cnt[2]=1;
  }
  else if(b==3){
    cnt[1]=1;
    cnt[2]=1;
  }else if(b==4){
    cnt[4]=1;
  }
  else if(b==5){
    cnt[1]=1;
    cnt[4]=1;
  }else if(b==6){
    cnt[2]=1;
    cnt[4]=1;
  }else if(b==7){
    cnt[2]=1;
    cnt[4]=1;
    cnt[1]=1;
  }
  lli ans=0;
  rep(i,8){
    if(cnt[i]==1){
      ans+=i;
    }
  }
  cout<<ans<<endl;
  return 0;
}