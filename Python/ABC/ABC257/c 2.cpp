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
   rep(i,n){
    if(s[i]=='0'){
      hito0.push_back(hito[i]);
    }else{
      hito1.push_back(hito[i]);
    }
   }
   if(hito0.size()==0||hito1.size()==0){
    cout<<n<<endl;
    return 0;
   }

   sort(hito0.rbegin(),hito0.rend());
   sort(hito1.begin(),hito1.end());

   lli cnt1=0;
   lli cnt2=0;
   lli cnt3=0;
   lli kizyun1=hito0[0]+1;
   lli kizyun3=hito0[0];
   lli kizyun2=hito1[0];
   rep(i,(int)hito0.size()){
    if(hito0[i]<kizyun1){
      cnt1++;
    }
    if(hito0[i]<kizyun2){
      cnt2++;
    }
    if(hito0[i]<kizyun3){
      cnt3++;
    }
   }
   rep(i,(int)hito1.size()){
    if(hito1[i]>=kizyun1){
      cnt1++;
    }
    if(hito1[i]>=kizyun2){
      cnt2++;
    }
    if(hito1[i]>=kizyun3){
      cnt3++;
    }
   }
   lli ma=max(cnt1,cnt2);
   ma=max(ma,cnt3);
   cout<<ma<<endl;
   

  return 0;
}