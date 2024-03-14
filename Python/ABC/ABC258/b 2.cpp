/**
*    created: 02.07.2022 20:58:04
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
  vvl aa(n+2,vl(n+2));
  vl bb(4);
  rep(i,4){
    cin>>bb[i];
  }
  for(lli i=1;i<=n;i++){
    for(lli j=n;j>=1;j--){
      aa[i][j]=bb[i-1]%10;
      bb[i-1]/=10;
    }
  }
  rep2(i,1,n+1){
    aa[0][i]=aa[n][i];
    aa[n+1][i]=aa[1][i];
    aa[i][0]=aa[i][n];
    aa[i][n+1]=aa[i][1];
  }
  aa[0][0]=aa[n][n];
  aa[0][n+1]=aa[n][1];
  aa[n+1][0]=aa[1][n];
  aa[n+1][n+1]=aa[1][1];
  

  rep(i,n+2){
    rep(j,n+2){
      cout<<aa[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;
}