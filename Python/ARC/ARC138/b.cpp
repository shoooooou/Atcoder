/**
*    created: 09.04.2022 22:06:41
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
  lli a[n];
  rep(i,n){
    cin>>a[i];
  } 
  
  if(a[0]==1){
    cout<<"No"<<endl;
    return 0;
  }

  if(n<=2){
    cout<<"Yes"<<endl;
    return 0;
  }

  if(a[1]==0){
    rep2(i,2,n){
      if(a[i]==1){
        cout<<"No"<<endl;
        return 0;
      }
    }
    cout<<"Yes"<<endl;
  }

  if(a[0]==0&&a[1]==1){
    rep2(i,2,n){
      if(a[i]==0){
        break;
      }
      if(i=n-1){
        cout<<"Yes"<<endl;
        return;
      }
    }
  }
  rep(i,n-1){
    if(a[i]==a[i+1]){
      break;
    }
    if(i==n-2){
        cout<<"Yes"<<endl;
        return;
    }
  }
  rep(i,n-3){
    if(a[i]==0&&a[i+1]==0&&a[i+2]==1&&a[i+3]==0){

        cout<<"No"<<endl;
        return;
    }
  }

  cout<<"Yes"<<endl;
  return 0;
}