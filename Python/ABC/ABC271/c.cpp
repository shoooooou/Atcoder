/**
*    created: 01.10.2022 20:51:14
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
  lli cnt=1;
  lli cnt2=0;
  rep(i,n){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  lli sabun;
  lli nokori;
  rep(i,n){
    if(a[i]==cnt){
      cnt++;
    }else if(a[i]<cnt){
      cnt2++;
    }else if(a[i]>cnt){
      sabun=a[i]-cnt;
      nokori=n-1-i;
      
      if(cnt2/2>=sabun){
        cnt+=sabun+1;
        cnt2-=sabun*2;
      }else if(cnt2/2<sabun){
        cnt+=cnt2/2;
        sabun-=cnt2/2;
        nokori+=cnt2%2;
        cnt2=0;
        if(nokori/2>=sabun){
          cnt+=sabun+1;
          n-=sabun*2;
        }else{
          cnt+=(nokori/2);
          cnt2+=nokori%2+1;
          //cout<<cnt2<<endl;
          break;
        }
      }
    }
  }
  if(cnt2>=2){
    cnt+=cnt2/2;
  }
  cout<<cnt-1<<endl;
  return 0;
}