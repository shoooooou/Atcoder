/**
*    created: 19.11.2022 20:50:21
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
  lli n,q;
  cin>>n>>q;

  map<string,lli> fol;
  lli t,a,b;
  string key,keyr;
  rep(i,q){
    cin>>t>>a>>b;
    key=to_string(a)+"to"+to_string(b);
    if(t==1){
      fol[key]=1;
    }else if(t==2){
      fol[key]=0;
    }else if(t==3){
      keyr=to_string(b)+"to"+to_string(a);
      if(fol.count(key)==0){
        cout<<"No"<<endl;
      }else if(fol.count(keyr)==0){
        cout<<"No"<<endl;
      }else if(fol[key]==1&&fol[keyr]==1){
        cout<<"Yes"<<endl;
      }else{
        cout<<"No"<<endl;
      }
    }
  }
  return 0;
}