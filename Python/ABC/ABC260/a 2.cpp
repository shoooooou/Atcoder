/**
*    created: 17.07.2022 20:57:51
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
  string n;
  cin>>n;
  if(n[0]==n[1]){
    if(n[1]==n[2]){
      cout<<-1<<endl;
      return 0;
    }
    cout<<n[2]<<endl;
  }else if(n[0]==n[2]){
    cout<<n[1]<<endl;
  }else if(n[1]==n[2]){
    cout<<n[0]<<endl;
  }else{
    cout<<n[0]<<endl;
  }
  return 0;
}