/**
*    created: 17.07.2022 20:58:18
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
vl aka(11,0);
vl ao(11,0);
lli x,y;
void akahenkan(){
  for(lli i=10;i>=2;i--){
    if(aka[i]>0){
      aka[i-1]+=aka[i];
      ao[i]+=aka[i]*x;
      aka[i]=0;
    }
  }
}
void aohenkan(){
  for(lli i=10;i>=2;i--){
    if(ao[i]>0){
      aka[i-1]+=ao[i];
      ao[i-1]+=ao[i]*y;
      ao[i]=0;
    }
  }
}
bool hantei(){
  for(lli i=10;i>=2;i--){
    if(aka[i]>0||ao[i]>0){
      return false;
    }
  }
  return true;
}
int main()
{
  lli n;
  cin>>n>>x>>y;
  aka[n]=1;
  lli jam=0;
  while(hantei()==false){
    akahenkan();
    aohenkan();

  }
  cout<<ao[1]<<endl;


  return 0;
}