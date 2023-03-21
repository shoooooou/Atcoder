/**
*    created: 06.08.2022 20:56:38
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
  lli a[15]={0};
  lli b;
  rep(i,5){
    cin>>b;
    a[b]++;
  }
  lli aa[15]={0};
  rep2(i,1,14){
    aa[a[i]]=true;
  }
  if(aa[2]&&aa[3]){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;

  }
  return 0;
}