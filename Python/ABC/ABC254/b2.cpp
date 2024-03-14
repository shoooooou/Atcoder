/**
*    created: 04.06.2022 20:58:52
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
  lli a[n][n];
  rep(i,n){
    rep(j,i+1){
      if(j==0){
        a[i][j]=1;
      }else if(j==i){
        a[i][j]=a[i-1][j-1];
      }
      else{
        lli ins=a[i-1][j-1]+a[i-1][j];
        a[i][j]=ins;
      }
    }
  }
  rep(i,n){
    //cout<<"aaaaa"; 
    rep(j,i+1){
      if(j==i){
        cout<<a[i][j];
      }else{
       cout<<a[i][j]<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}