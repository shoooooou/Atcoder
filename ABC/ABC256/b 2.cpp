/**
*    created: 18.06.2022 20:57:33
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
  lli base[4]={0};
  lli cnt=0;
  rep(i,n){
    base[0]=1;
    if(a[i]>=4){
      rep(j,4){
        cnt+=base[j];
        base[j]=0;
      }
    }else if(a[i]==3){
      cnt=cnt+base[3]+base[2]+base[1];
      rep2(j,0,4){
        base[j]=0;
      }
      base[3]=1;
    }else if(a[i]==2){
      cnt=cnt+base[3]+base[2];
      base[3]=base[1];
      base[2]=1;
      base[1]=0;
      base[0]=0;
    }else if(a[i]==1){
      cnt=cnt+base[3];
      base[3]=base[2];
      base[2]=base[1];
      base[1]=1;
      base[0]=0;

    }
  }
  cout<<cnt<<endl;
  return 0;
}