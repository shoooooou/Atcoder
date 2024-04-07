/**
*    created: 12.03.2022 20:55:35
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using graph = vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  int v,a[3];
  cin>>v>>a[0]>>a[1]>>a[2];
  int cnt=0;
  while(true){
    //cout<<v<<" "<<a[cnt]<<endl;
    if(v<a[cnt]){
      if(cnt==0){
        cout<<"F"<<endl;
        break;
      }else if(cnt==1){
        cout<<"M"<<endl;
        break;
      }else if(cnt==2){
        cout<<"T"<<endl;
        break;
      }
    }else{
      v-=a[cnt];
    }
    cnt++;
    if(cnt==3){
      cnt=0;
    }
  }

  return 0;
}