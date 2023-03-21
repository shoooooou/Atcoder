/**
*    created: 09.07.2022 20:57:41
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
  string s,t;
  cin>>s>>t;
  lli cnt1=0;
  lli cnt2=0;
  char pre='5';
  lli stock=t.size()-s.size();
  while(cnt2<t.size()&&cnt1<s.size()){
    if(pre==s[cnt1]&&stock>0){
        char hikaku=s[cnt1];
        lli hiku=0;
        for(lli i=cnt2;i<=cnt2+stock;++i){
          //cout<<i<<" "<<t[i]<<" "<<hikaku<<" "<<t[i+1]<<" "<<s[cnt1+1]<<endl;
          if(t[i]==hikaku&&t[i+1]==s[cnt1+1]){
            cnt2=i;
            break;
          }
          if(i==cnt2+stock){
            cout<<"No"<<endl;
            return 0;
          }
          hiku++;
        }
      stock-=hiku;
      //cout<<"stock"<<stock<<endl;
    }
      //cout<<cnt1<<" "<<cnt2<<endl;
      //cout<<s[cnt1]<<" "<<t[cnt2]<<endl;
    if(s[cnt1]!=t[cnt2]){
      cout<<"No"<<endl;
      return 0;
    }
    pre=s[cnt1];
    cnt1++;cnt2++;
  }
  //cout<<cnt1<<"   "<<cnt2<<endl;
  if(cnt1==s.size()&&cnt2==t.size()){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No2"<<endl;
  }
  return 0;
}