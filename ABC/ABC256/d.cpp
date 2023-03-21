/**
*    created: 18.06.2022 20:57:58
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
  deque<lli> st;
  deque<lli> end;
  lli n;
  cin>>n;
  lli x,y;
  cin>>x>>y;
  st.push_back(x);
  end.push_back(y);
  rep(i,n-1){
    cin>>x>>y;
    auto itr1=st.begin();
    auto itr2=end.begin();
    while(true){
      if(y<*itr1){
        st.push_front(x);
        end.push_front(y);
        break;
      }
      if(*itr2<x){
        ++itr1;
        if(itr1==st.end()){
          st.push_back(x);
          end.push_back(y);
          break;
        }
        ++itr2;
        continue;
      }
      *itr1=min(x,*itr1);
      *itr2=max(y,*itr2);
      break;
    }
  }
  auto itr1=st.begin();
  auto itr2=end.begin();
  auto itr3=st.begin();
  auto itr4=end.begin();
  itr3++;
  itr4++;
  while(itr3!=st.end()){
    if(*itr2>=*itr3){
      *itr2=max(*itr2,*itr4);
      st.erase(itr3);
      end.erase(itr4);
    }else{
      itr1++;
      itr2++;
      itr3++;
      itr4++;
    }
  }
  auto itr1=st.begin();
  auto itr2=end.begin();
  while(itr1!=st.end()){
    cout<<*itr1<<" "<<*itr2<<endl;
    ++itr1;
    ++itr2;
  }

  return 0;
}