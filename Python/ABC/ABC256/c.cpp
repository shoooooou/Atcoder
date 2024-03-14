/**
*    created: 18.06.2022 20:57:44
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
  vvl masu(3,vl(3));
  lli h[3];
  lli w[3];
  rep(i,3){
    cin>>h[i];
  }
  rep(i,3){
    cin>>w[i];
  }
  lli cnt=0;
  rep2(i,1,h[0]-1){
    rep2(j,1,h[0]-i){
      lli k=h[0]-i-j;
      masu[0][0]=i;
      masu[0][1]=j;
      masu[0][2]=k;
      rep2(l,1,h[1]-1){
        rep2(m,1,h[1]-l){
          lli n=h[1]-l-m;
          masu[1][0]=l;
          masu[1][1]=m;
          masu[1][2]=n;
          rep2(o,1,h[2]-1){
            rep2(p,1,h[2]-o){
              lli q=h[2]-p-o;
              masu[2][0]=o;
              masu[2][1]=p;
              masu[2][2]=q;
              // rep(tes,3){
              //   rep(tes2,3){
              //     cout<<masu[tes][tes2]<<" ";
              //   }
              //   cout<<endl;
              // }
              bool flag=false;
              rep(v,3){
                lli hikaku=0;
                rep(w,3){
                  hikaku+=masu[w][v];
                }
                if(hikaku!=w[v]) break;
                if(v==2) flag=true;
              }
              if(flag){
                cnt++;
              }     
            }
          }    
        }
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}