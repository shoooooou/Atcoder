/**
*    created: 15.10.2022 20:57:40
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
  lli h,w,y,x;
  cin>>h>>w>>y>>x;
  lli n;
  cin>>n;
  map<lli,vector<lli>> kabeud;
  vvl kaberl(n+1);
  rep(i,n){
    lli yy,xx;
    cin>>yy>>xx;
    kabeud[xx].push_back(yy);
    kaberl[yy].push_back(xx);
  }
  rep(i,n+1){
    if(kabeud[i].size()>0){
      sort(kabeud[i].begin(),kabeud[i].end());
    }
    if(kaberl[i].size()>0){
      sort(kaberl[i].begin(),kaberl[i].end());
    }
  }
  lli q;
  cin>>q;
  lli mokuy,mokux;
  rep(i,q){
    char ope;
    lli kazu;
    cin>>ope;
    cin>>kazu;
    
    if(ope=='U'){
      mokuy=y-kazu;
      if(mokuy<1) mokuy=1;
      if(kabeud[x].size()>0){
        auto itr1=lower_bound(kabeud[x].begin(),kabeud[x].end(),y);    
        auto itr2=lower_bound(kabeud[x].begin(),kabeud[x].end(),mokuy);
        if(itr1!=itr2){
          mokuy=*itr2;
        }
      }
      y=mokuy;    
    }else if(ope=='D'){
      mokuy=y+kazu;
      if(mokuy>h) mokuy=h;
      if(kabeud[x].size()>0){
        auto itr1=lower_bound(kabeud[x].begin(),kabeud[x].end(),y);    
        auto itr2=lower_bound(kabeud[x].begin(),kabeud[x].end(),mokuy);
        if(itr1!=itr2){
          mokuy=*itr1;
        }
      }
      y=mokuy;    
    }else if(ope=='R'){
      mokux=x+kazu;
      if(mokux>w) mokux=w;
      if(kaberl[y].size()>0){
        auto itr1=lower_bound(kaberl[y].begin(),kabeud[y].end(),x);    
        auto itr2=lower_bound(kaberl[y].begin(),kabeud[y].end(),mokux);
        if(itr1!=itr2){
          mokuy=*itr1;
        }
      }
      x=mokux;    
    }else if(ope=='L'){
      mokux=x-kazu;
      if(mokux<1) mokux=1;
      if(kaberl[y].size()>0){
        auto itr1=lower_bound(kaberl[y].begin(),kabeud[y].end(),x);    
        auto itr2=lower_bound(kaberl[y].begin(),kabeud[y].end(),mokux);
        if(itr1!=itr2){
          mokuy=*itr2;
        }
      }
      x=mokux;    
    }

    cout<<y<<" "<<x<<endl;
  }

  return 0;
}