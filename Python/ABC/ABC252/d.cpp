/**
*    created: 21.05.2022 23:55:11
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
  lli N=2*100000+10;
  lli a[2*100000+10];
  lli n;
  cin >> n;
    for(int i = 0; i < n; i ++ )
    {
        cin >> a[i];
    }
    
    vector<int> cnt(N, 0);
    for(int i = 0; i < n; i ++ ) cnt[a[i]] ++;
    for(int i = 0; i < N - 1; i ++ ) cnt[i + 1] += cnt[i];
    
    lli ans = 0;
    for(int j = 0; j < n; j ++ ) ans += (lli)cnt[a[j] - 1] * (n - cnt[a[j]]);
    rep(i,20){
      cout<<cnt[i]<<" ";
    }
    
    cout << ans << endl;
  return 0;
}