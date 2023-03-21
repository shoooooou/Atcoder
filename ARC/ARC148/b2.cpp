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
  vl inds;
  rep(i,n){
    if(ma==count[i]){
      inds.push_back(i);
    }
  }

  multiset<string> ans;
  
  rep(i,inds.size()){
    string ssta=s.substr(0,start);
    //cout<<ssta<<endl;
    string smid=s.substr(start,inds[i]-start+1);
    //cout<<smid<<endl;
    string send=s.substr(inds[i]+1,n-inds[i]+1);
    //cout<<send<<endl;

    //cout<<ssta<<" "<<smid<<" "<<send<<endl;
    reverse(smid.begin(),smid.end());
    rep(j,smid.length()){
      if(smid[j]=='p'){
        smid[j]='d';
      }else{
        smid[j]='p';
      }
    }
    string ans1=ssta+smid+send;
    //cout<<ans1<<endl;
    ans.insert(ans1);
  }
  auto itr=ans.begin();
  
  cout<<*itr<<endl;

  return 0;
}