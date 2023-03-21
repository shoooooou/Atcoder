/**
*    created: 11.06.2022 20:58:42
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
  double n,k;
  cin>>n>>k;
  vector<double> a(k);
  rep(i,k){
    cin>>a[i];
    a[i]-=1;
  }
  double maxim=-INF;
  vector<vector<double>> xy(n,vector<double>(2));
  rep(i,n){
    cin>>xy[i][0]>>xy[i][1];
  }  

  rep(i,n){
    bool flag1=false;
    rep(j,k){
      if(a[j]==i){
        flag1=true;
        break;
      }
    }
    if(flag1) continue;
    double tissa=INF;
    rep(l,k){
      double dist=sqrt((xy[i][0]-xy[a[l]][0])*(xy[i][0]-xy[a[l]][0])+(xy[i][1]-xy[a[l]][1])*(xy[i][1]-xy[a[l]][1]));
      tissa=min(dist,tissa);
    }
    maxim=max(maxim,tissa);
  }
  cout<<maxim<<endl;


  

  return 0;
}