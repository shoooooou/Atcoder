/**
*    created: 13.08.2022 20:46:43
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
  lli h1,w1,h2,w2;
  cin>>h1>>w1;

  vvl a(h1,vl(w1));
  rep(i,h1){
    rep(j,w1){
      cin>>a[i][j];
    }
  }
  cin>>h2>>w2;

  vvl b(h2,vl(w2));
  rep(i,h2){
    rep(j,w2){
      cin>>b[i][j];
    }
  }

  if(h1<h2||w1<w2){
    cout<<"No"<<endl;
    return 0;
  }
  vl tate(h1,0);
  vl yoko(w1,0);
  bool flag=false;
  rep(i,h2){
    rep(j,w2){
      flag=false;
      rep(k,h1){
        rep(l,w1){
          if(a[k][l]==b[i][j]){
            tate[k]++;
            yoko[l]++;
            flag=true;
          }
        }
        if(flag){
          break;
        }
        if(k==h1-1){
          //cout<<b[i][j]<<endl;
          cout<<"No"<<endl;
          return 0;
        }
      }
    }
  }
  lli hikaku=0; 
  rep(i,h1-1){
    if(tate[i]!=0){
      if(hikaku==0){
        hikaku=tate[i];
      }else{
        if(hikaku!=tate[i]){
          cout<<"No"<<endl;
          return 0;
        }
      }
    }
  }
  hikaku=0; 
  rep(i,w1-1){
    if(yoko[i]!=0){
      if(hikaku==0){
        hikaku=yoko[i];
      }else{
        if(hikaku!=yoko[i]){
          cout<<"No"<<endl;
          return 0;
        }
      }
    }
  }
  
  cout<<"Yes"<<endl;

  return 0;
}