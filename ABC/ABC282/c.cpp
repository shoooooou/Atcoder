/**
*    created: 17.12.2022 20:58:59
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
  lli n;
  cin>>n;
  string s;
  cin>>s;
  lli flag=-1;
  rep(i,n){
    if(s[i]=='"'){
      flag*=(-1);
      cout<<s[i];
    }else if(s[i] == ','){
      if(flag == -1){
        cout<<'.';
      }else{
        cout<<s[i];
      }
    }else{
      cout<<s[i];
    }
  }
  return 0;
}