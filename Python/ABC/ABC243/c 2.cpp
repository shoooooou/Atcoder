/**
*    created: 12.03.2022 20:55:53
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
  lli n;
  cin>>n;
  vector<vector<int>> xy(n);
  int aa=0;
  rep(i,n){
    int x,y;
    cin>>x>>y;
    xy[i].push_back(y);
    xy[i].push_back(x);
    xy[i].push_back(aa);
    aa++;
  }
  sort(xy.begin(),xy.end());
  string s;
  cin>>s;
  
  // sort(xy.begin(),xy.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[1] < beta[1];});

  

  rep(i,n-1){
    //cout<<xy[i][0]<<" "<<xy[i+1][0]<<" "<<s[xy[i][2]]<<" "<<s[xy[i][2]]<<endl;
    if(xy[i][0]!=xy[i+1][0]) continue;
    if(s[xy[i][2]]=='R'&&s[xy[i+1][2]]=='L'){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;

  return 0;
}