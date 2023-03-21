/**
*    created: 31.07.2022 20:57:16
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
  lli n;
  cin>>n;

  vl aa(n+1,-1);
  bool bb[n+1]={false};
  lli tyouhuku=0;
  rep2(i,1,n+1){
    cin>>aa[i];
    if(i==aa[i]){
      bb[i]=true;
      tyouhuku++;
    }
  }
  lli cnt=0;
  lli bcnt=1;
  rep2(i,1,n+1){
    if(bb[i]){
      cnt+=tyouhuku-bcnt;
      bcnt++;
    }else{
      if(i<aa[i]&&aa[aa[i]]==i){
        cnt++;
      }
    }
    
  }
  cout<<cnt<<endl;
  return 0;
}