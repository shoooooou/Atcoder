/**
*    author:  kkr0226
*    created: 26.03.2022 21:53:28
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
  lli n,k;
  cin>>n>>k;

  lli a[n],b[n];
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    cin>>b[i];
  }
  bool flag[4];
  rep(i,4){
    flag[i]=false;
  }
  bool flag2[2];
  flag2[0]=true;
  flag2[1]=true;

  rep(i,n-1){
    //cout<<flag2[0]<<" "<<flag2[1]<<endl;
    if(flag2[0]){
      if(abs(a[i]-a[i+1])>k){
        flag[0]=false;
      }else{
        flag[0]=true;
      }
      if(abs(a[i]-b[i+1])>k){
        flag[1]=false;
      }else{
        flag[1]=true;
      }
    }  
    if(flag2[1]){
      if(abs(b[i]-a[i+1])>k){
        flag[2]=false;
      }else{
        flag[2]=true;
      }
      if(abs(b[i]-b[i+1])>k){
        flag[3]=false;
      }else{
        flag[3]=true;
      }
    }
    //cout<<flag[0]<<" "<<flag[1]<<" "<<flag[2]<<" "<<flag[3]<<endl;
    if(flag[0]||flag[2]){
      flag2[0]=true;
    }
    if(flag[1]||flag[3]){
      flag2[1]=true;
    }
    if(!flag[0]){
      if(!flag[2]){
        flag2[0]=false;
        
      }
    }  
    if(!flag[1]){
      if(!flag[3]){
        flag2[1]=false;
        
      }
    }  
    //cout<<flag2[0]<<" "<<flag2[1]<<endl; 
  }
  if(flag2[0]||flag2[1]){
      cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;

}