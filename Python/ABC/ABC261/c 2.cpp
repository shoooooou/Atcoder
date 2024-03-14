/**
*    created: 23.07.2022 20:59:51
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
  unordered_map<string,lli> mozi;
  lli n;
  cin>>n;
  rep(i,n){
    string s;
    cin>>s;
    if(mozi.find(s)!=mozi.end()){
      cout<<s<<"("<<mozi[s]<<")"<<endl;
      mozi[s]++;
    }else{
      cout<<s<<endl;
      mozi[s]=1;
    }


  }
  return 0;
}