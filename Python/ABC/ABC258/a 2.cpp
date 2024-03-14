/**
*    created: 02.07.2022 20:57:53
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
  lli k;
  cin>>k;

  if(k<60){
    if(k<10){
      cout<<"21:0"<<k<<endl;
      return 0;
    }
    cout<<"21:"<<k<<endl;
    return 0;
  }else{
    lli a=k%60;
    if(a<10){
      cout<<"22:0"<<a<<endl;
      return 0;
    }
    cout<<"22:"<<a<<endl;
    return 0;

  }

  return 0;
}