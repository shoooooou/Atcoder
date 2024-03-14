/**
*    created: 19.06.2022 20:52:33
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
lli kesu(lli x){
  while(x%10!=0){
    x/=10;
  }
  return x;
}
bool hantei(lli x){
  string hikaku1=to_string(x);
  reverse(hikaku1.begin(),hikaku1.end());
  lli y=stoll(hikaku1);
  bool flag;
  if(x>y){
    flag=false;
  }else{
    flag=true;
  }
  return flag;
}
int main()
{
  lli n;
  lli ind1;
  cin>>n>>ind1;
  lli cnt=0;
  string gyakuk=to_string(ind1);
  reverse(gyakuk.begin(),gyakuk.end());
  lli ind2=stoll(gyakuk);

  if(ind1%10==0){
    lli aa=ind1;
    ind1=kesu(ind1);
    if(hantei(ind1)){
      if(1<=aa&&aa<=n){
        cout<<1<<endl;
        return 0;
      }else{
        cout<<0<<endl;
        return 0;
      }
    }
    cout<<0<<endl;
    return 0;
  }


  if(!hantei(ind1)){
      cout<<0<<endl;
      return 0;
   }
  

  bool flag1=false;
  bool flag2=false;

  while(true){
    
    if(flag1&&flag2){
      if(ind1==ind2){
        cnt/=2;
      }
      cout<<cnt<<endl;
      return 0;
    }

    if(!flag1){
      if(1<=ind1&&ind1<=n){
        cnt++;
        ind1*=10;
      }else{
        flag1=true;
      }
    }

    if(!flag2){
      if(1<=ind2&&ind2<=n){
        cnt++;
        ind2*=10;
      }else{
        flag2=true;
      }
    }

  }

  return 0;
}