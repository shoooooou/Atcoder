/**
*    created: 11.09.2022 20:55:08
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
  string s;
  cin>>s;
  lli start;

  rep(i,n){
    if(s[i]=='p'){
      start=i;
      break;
    }
    if(i==n-1){
      cout<<s<<endl;
      return 0;
    }  
  }

  vl count(n,0);
  lli cnt=0;
  
  rep2(i,start,n){
    if(i==n-1 && s[i]=='p'){
      cnt++;
      count[i]=cnt;
      break;
    }
    if(s[i]=='p'){
      cnt++;
    }else{
      count[i-1]=cnt;
      cnt=0;
    }
  }
  cnt=0;
  bool flag=true;
  lli memo;
  rep2(i,start,n){
    if(flag){
      if(s[i]=='p'){
        cnt++;
      }else{
        memo=i-1;
        cnt++;
        flag=false;
      }
    }else{
      if(s[i]=='d'){
        cnt++;
      }else{
        count[memo]=cnt;
        break;
      }
    }
  }
  lli maxind=0;
  lli ma=0;
  rep(i,n){
    if(ma<=count[i]){
      ma=count[i];
      maxind=i;
    }
  }
  string s2=s.substr(start,maxind-start+1);
  reverse(s2.begin(),s2.end());
  rep(i,start){
    cout<<s[i];
  }
  rep(i,s2.length()){
    if(s2[i]=='p'){
      cout<<'d';
    }else{
      cout<<'p';
    }
  }
  // if(maxind!=n-1){
  //   rep2(i,maxind+1,n){
  //     cout<<s[i];
  //   }
  // }
  rep2(i,maxind+1,n){
    cout<<s[i];
  }
  return 0;
}