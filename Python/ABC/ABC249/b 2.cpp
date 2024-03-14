/**
*    author:  kkr0226
*    created: 23.04.2022 20:51:50
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
  string n;
  cin>>n;
  bool flag1=false;
  bool flag2=false;
  string mozi;
  for(int i=0;i<n.length();i++){
    if(n[i]>='a'&&n[i]<='z'){
      flag1=true;
    }
    if(n[i]>='A'&&n[i]<='Z'){
      flag2=true;
    }
    rep(j,mozi.length()){
      if(mozi[j]==n[i]){
        cout<<"No"<<endl;
        return 0;
      }
    }
    mozi+=n[i];
  }
  if(flag1==true&&flag2==true){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}