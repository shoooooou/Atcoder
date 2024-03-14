/**
*    created: 30.07.2022 20:54:43
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
   string s;
   lli n;
   cin>>n>>s;
   lli ind=0;
   string rs=s;
   reverse(rs.rbegin(),rs.rend());
   if(s==rs){
    cout<<"Yes"<<endl;
    return 0;
   }
   string ss=s;
   while(ind<=((n/2)-1)){
      if(ind==n/2-1){
        if(s[ind]=='B'&&s[ind+1]=='A'){
          s[n-ind-1]='A';
        }
        ind++;
      }
      if(s[ind]=='A'){
        ind++;
      }
      if(s[ind]=='B'){
        ind++;
        if(s[ind]=='A'){
          s[n-ind]='A';
          s[n-ind-1]='B';
          ind++;
        }
      }
   }
   rs=s;
   reverse(rs.rbegin(),rs.rend());
   if(s==rs){
    cout<<"Yes"<<endl;
    return 0;
   }
   ind=0;
   s=ss;
   while(ind<=((n/2)-1)){
      if(ind==n/2-1){
        if(s[n-1-ind]=='A'&&s[n-1-ind-1]=='B'){
          s[ind]='A';
        }
        ind++;
      }
      if(s[n-1-ind]=='B'){
        ind++;
      }
      if(s[n-1-ind]=='A'){
        ind++;
        if(s[n-1-ind]=='B'){
          s[ind-1]='A';
          s[ind]='B';
          ind++;
        }
      }
   } 
   rs=s;
   reverse(rs.rbegin(),rs.rend());
   if(s==rs){
    cout<<"Yes"<<endl;
    return 0;
   }
   cout<<"No"<<endl;
  return 0;
}