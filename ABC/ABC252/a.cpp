/**
 *    author:  kkr0226
 *    created: 28.05.2022 21:13:24
 **/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vvi = vector<vector<int>>;
using vi = vector<int>;
using vvl = vector<vector<lli>>;
using vl = vector<lli>;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
struct cww
{
  cww()
  {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
} star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  lli n, q, x1, x2;
  cin >> n;
  multiset<lli> aa;
  lli ma;
  lli mi;
  rep(i, n)
  {
    cin >> q;
    if (q == 1)
    {
      cin >> x1;
      aa.insert(x1);
    }
    else if (q == 2)
    {
      cin >> x1 >> x2;
      while (x2-- && aa.find(x1)!=aa.end())
      {
        aa.erase(aa.find(x1));
      }
      
    }
    else if (q == 3)
    {
      mi = *aa.begin();
      ma = *aa.rbegin();
      
      cout << ma - mi << endl;
    }
  }
  return 0;
}