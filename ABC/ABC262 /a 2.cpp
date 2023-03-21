/**
*    created: 31.07.2022 20:56:53
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
  if(n%4==2){
    cout<<n<<endl;
  }else if(n%4==0){
    cout<<n+2<<endl;
  }else if(n%4==1){
    cout<<n+1<<endl;
  }else if(n%4==3){
    cout<<n+3<<endl;
  }
  return 0;
}