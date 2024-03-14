/**
*    created: 21.08.2022 20:57:15
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
void no(){
  cout<<"No"<<endl;
}
int main()
{
  lli n,mn,t;
  cin>>n>>mn>>t;

  lli a[n]={0};
  rep2(i,1,n){
    cin>>a[i];
  }
  lli x[n]={0};
  rep(i,mn){
    lli xx;
    lli yy;
    cin>>xx>>yy;
    x[xx]=yy;
  }
  rep2(i,1,n){
    if(t<=a[i]){
      no();
      return 0;
    }
    t-=a[i];
    t+=x[i+1];
  }
  cout<<"Yes"<<endl;
  return 0;
}