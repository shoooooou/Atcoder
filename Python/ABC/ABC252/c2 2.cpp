/**
*    created: 21.05.2022 20:54:32
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
  string s[n];
  rep(i,n){
    cin>>s[i];
  }
  lli min=INF;
  rep(i,10){
    lli flag[10]={0};
    rep(j,n){
      rep(k,10){
        int val=s[j][k]-'0';
        if(val==i){
          flag[k]++;
          break;
        }
      }
    }

    lli cnt=0;
    int ind=0;
    bool flag2=false;
    while(true){
      if(ind==10) ind=0;
      if(flag[ind]>0) flag[ind]--;
      rep(s,10){
        if(flag[s]==0){
          if(s==9){
            if(min>=cnt){
              min=cnt;
            }
            flag2=true;
          }
        }else{
          break;
        }
      }
      if(flag2) break;
      ind++;
      cnt++;
    }
  }
  cout<<min<<endl;

  
  return 0;
}