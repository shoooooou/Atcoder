/**
*    created: 26.06.2022 20:59:01
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
  vl a(3);
  cin>>a[0]>>a[1]>>a[2];
  sort(a.rbegin(),a.rend());
  if(a[0]==0&&a[1]==0&&a[2]==0){
    cout<<0<<endl;
    return 0;
  }
  if(a[0]==1&&a[1]==1&&a[2]==0){
    cout<<1<<endl;
    return 0;
  } 
  if(a[0]==1&&a[1]==1&&a[2]==1) {
    cout<<1<<endl;
    return 0;
  }
  if(a[0]==1&&a[1]==0&&a[2]==0) {
    cout<<-1<<endl;
    return 0;
  }
  if(a[0]==a[1]){
    cout<<a[0]<<endl;
    return 0;
  }
  if(a[2]==0){
    cout<<-1<<endl;
    return 0;
  }
  if(a[0]==a[1]+a[2]){
    cout<<a[0]<<endl;
  }
  if(a[0]<a[1]+a[2]){
    lli sabun=(a[1]+a[2])-a[0];
    a[0]-=sabun;
    a[1]-=sabun;
    a[2]-=sabun;
    if(a[0]==a[1]+a[2]){
      cout<<sabun+a[0]<<endl;
      return 0;
    }else{
      cout<<-1<<endl;
      return 0;
    }
  }
  
  cout<<-1<<endl;


  return 0;
}