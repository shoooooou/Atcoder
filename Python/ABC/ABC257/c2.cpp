/**
*    created: 25.06.2022 21:19:56
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
   string s;
   cin>>n>>s;
   vl hito(n);
   vl hito0;
   vl hito1;

   rep(i,n){
    cin>>hito[i];
   }
   vector<pair<lli,char>> hitoa;
   rep(i,n){
    hitoa.push_back(pair(hito[i],s[i]));
   }
   sort(hitoa.begin(),hitoa.end());
  //  rep(i,n){
  //   cout<<hitoa[i].first<<" "<<hitoa[i].second<<endl;
  //  }
  bool flag=true;
  lli ans=-INF;
  lli cnt=0;
  lli x=0;
  rep(i,n){
    //cout<<hitoa[i].second<<"    "<<i<<endl;
    if(hitoa[i].second=='0'){
      x=i;
      break;
    }
  }
  lli hozi;
  while(x!=n){
    if(flag){
      if(hitoa[x].second=='0'){
        cnt++;
      }else{
        if(hitoa[x-1].first==hitoa[x].first){
          cnt--;
          hozi=hitoa[x].first;
        }
        cnt++;
        flag=false;
      }
    }else{
      if(hitoa[x].second=='1'){
        if(hozi==hitoa[x].first) cnt--;
        cnt++;
      }else{
        ans=max(ans,cnt);
        flag=true;
        cnt++;
      }
    }
    //cout<<x<<" "<<cnt<<endl;
    x++;
  }
  ans=max(ans,cnt);
  cout<<ans<<endl;
  return 0;
}