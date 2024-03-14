/**
*    created: 01.10.2022 22:32:02
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
   vl a(n);
   rep(i,n){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
    lli ans=1;
    lli cnt=0;
   rep(i,n){
    if(a[i]==ans){
      ans++;
    }else if(a[i]<ans){
      cnt++;
    }else{
      rep2(j,cnt,a[i]){
        if(cnt>=2){
          cnt-=2;
          ans++;
        }else{
          lli nokori=n-i;
          if(nokori+cnt>=2){
            nokori-=2-cnt;
            n-=2-cnt;
            cnt=0;
            ans++;
          }else{
            break;
          }
        }
      }
    }
   }
    if(cnt>=2){
      ans+=cnt/2;
    }
    cout<<ans-1<<endl;
  return 0;
}