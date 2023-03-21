/**
*    created: 19.11.2022 20:50:28
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
  lli a[n+1];
  rep(i,n){
    cin>>a[i+1];
  }
  lli q;
  cin>>q;
  lli t,x,y;
  lli zenn=-1;
  lli b[n+1];
  rep(i,n){
    b[i+1]=0;
  }
  map<string,lli> add;
  lli zenncnt=0;
  string key;
  rep(i,q){
    cin>>t;
    if(t==1){
      cin>>x;
      zenn=x;
      zenncnt++;
    }else if(t==2){
      cin>>x>>y;
      if(zenn==-1){
        a[x]+=y;
      }else{
        key=to_string(zenncnt)+"no"+to_string(x);
        if(add.count(key)==0){
          add[key]=y;
        }else{
          add[key]+=y;
        }
      }
    }else if(t==3){
      cin>>x;
      if(zenn==-1){
        cout<<a[x]<<endl;
      }else{
        key=to_string(zenncnt)+"no"+to_string(x);
        if(add.count(key)==0){
          cout<<zenn<<endl;
        }else{
          cout<<zenn+add[key]<<endl;
        }
      }
    }
  }
  return 0;
}