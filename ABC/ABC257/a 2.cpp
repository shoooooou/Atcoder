/**
*    created: 25.06.2022 21:00:12
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
char henkan(lli a){
  if(a==1) return 'A';
  if(a==2) return 'B';
  if(a==3) return 'C';
  if(a==4) return 'D';
  if(a==5) return 'E';
  if(a==6) return 'F';
  if(a==7) return 'G';
  if(a==8) return 'H';
  if(a==9) return 'I';
  if(a==10) return 'J';
  if(a==11) return 'K';
  if(a==12) return 'L';
  if(a==13) return 'M';
  if(a==14) return 'N';
  if(a==15) return 'O';
  if(a==16) return 'P';
  if(a==17) return 'Q';
  if(a==18) return 'R';
  if(a==19) return 'S';
  if(a==20) return 'T';
  if(a==21) return 'U';
  if(a==22) return 'V';
  if(a==23) return 'W';
  if(a==24) return 'X';
  if(a==25) return 'Y';
  if(a==26) return 'Z';
}
int main()
{
  double n,x;
  cin>>n>>x;
  lli a;
  a=ceil(x/n);
 // cout<<a<<endl;
  cout<<henkan(a)<<endl;
  return 0;
}