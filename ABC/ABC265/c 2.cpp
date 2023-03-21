/**
*    created: 21.08.2022 20:57:21
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
  lli h,w;
  cin>>h>>w;
  string g[h];
  int seek[h][w]={0};
  rep(i,h){
    cin>>g[i];
  }
  lli x=0;
  lli y=0;

  while(true){
    if(seek[y][x]==1){
      cout<<"-1"<<endl;
      return 0;
    }
    seek[y][x]=1;

    if(g[y][x]=='U'){
        y--;
        if(y<0){
          cout<<y+2<<" "<<x+1<<endl;
          return 0;
        }
    }else if(g[y][x]=='D'){
        y++;
        if(y>h-1){
          cout<<y<<" "<<x+1<<endl;
          return 0;
        }
    }else if(g[y][x]=='R'){
        x++;
        if(x>w-1){
          cout<<y+1<<" "<<x<<endl;
          return 0;
        }
    }else if(g[y][x]=='L'){
        x--;
        if(x<0){
          cout<<y+1<<" "<<x+2<<endl;
          return 0;
        }
    }  
  }
  
  return 0;
}