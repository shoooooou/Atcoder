/**
*    created: 05.03.2022 20:58:15
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using graph = vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  string n;
  cin>>n;
  sort(n.begin(),n.end());
  cout<<n<<endl;
  return 0;
}