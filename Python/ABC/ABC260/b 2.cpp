/**
*    created: 17.07.2022 20:58:12
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ull = unsigned long long;
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
  lli n,x,y,z;
  cin>>n>>x>>y>>z;
  bool hito[n]={true};
  vl suugaku(n);
  vl eigo(n);
  vl bangou(n);
  rep(i,n){
    bangou[i]=i;
  }
  rep(i,n){
    cin>>suugaku[i];
  }
  rep(i,n){
    cin>>eigo[i];
  }
  rep(i,n-1){
    rep2(j,i+1,n){
      if(suugaku[i]<suugaku[j]){
        swap(suugaku[i],suugaku[j]);
        swap(eigo[i],eigo[j]);
        swap(bangou[i],bangou[j]);
      }
    }
  }
  rep(i,x){
    
    cout<<bangou[i]+1<<endl;
    hito[bangou[i]]=false;

  }
  

  rep(i,n-x-1){
    rep2(j,i+1,n-x){
      if(bangou[i]>bangou[j]){
        swap(suugaku[i],suugaku[j]);
        swap(eigo[i],eigo[j]);
        swap(bangou[i],bangou[j]);
      }
    }
  }
 
  cout<<endl;
  rep(i,n-x-1){
    rep2(j,i+1,n-x){
      if(eigo[i]<eigo[j]){
        swap(suugaku[i],suugaku[j]);
        swap(eigo[i],eigo[j]);
        swap(bangou[i],bangou[j]);
      }
    }
  }
  lli kaisuu=0;
  lli i=0;
  while(kaisuu!=y){
    if(hito[bangou[i]]){
      cout<<bangou[i]+1<<endl;
      hito[bangou[i]]=false;
      i++;kaisuu++;
    }else{
      while(true){
        if(hito[bangou[i]]){
          cout<<bangou[i]+1<<endl;
          hito[bangou[i]]=false;
          i++;kaisuu++;
          break;
        }
        i++;
      }
    }
  }
  
  

  vl goukei(n-x-y);
  rep(i,n-x-y){
    goukei[i]=suugaku[i]+eigo[i];
  }
  
  rep(i,n-x-1-y){
    rep2(j,i+1,n-x-y){
      if(bangou[i]>bangou[j]){
        swap(bangou[i],bangou[j]);
        swap(goukei[i],goukei[j]);
      }
    }
  }
  
  rep(i,n-x-1-y){
    rep2(j,i+1,n-x-y){
      if(goukei[i]<goukei[j]){
        swap(bangou[i],bangou[j]);
        swap(goukei[i],goukei[j]);
      }
    }
  }
   kaisuu=0;
   i=0;
   while(kaisuu!=z){
    if(hito[bangou[i]]){
      cout<<bangou[i]+1<<endl;
      hito[bangou[i]]=false;
      i++;kaisuu++;
    }else{
      while(true){
        if(hito[bangou[i]]){
          cout<<bangou[i]+1<<endl;
          hito[bangou[i]]=false;
          i++;kaisuu++;
          break;
        }
        i++;
      }
    }
  }

  
  return 0;
}