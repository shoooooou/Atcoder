/**
*    created: 01.10.2022 20:51:02
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

  string ans;
  string ans2;
  if(n<=15){
    if(n==10){
      cout<<0<<"A"<<endl;
      
    }else if(n==11){
      
      cout<<0<<"B"<<endl;
    }else if(n==12){
      cout<<0<<"C"<<endl;
      
    }else if(n==13){
      cout<<0<<"D"<<endl;
     
    }else if(n==14){
      cout<<0<<"E"<<endl;
      
    }else if(n==15){
      cout<<0<<"F"<<endl;
      
    }else{
      cout<<0<<n<<endl;
    }
    return 0;
  }else{
    if(n/16==10){
      ans2="A";
    }else if(n/16==11){
      ans2="B";
    }else if(n/16==12){
      ans2="C";
    }else if(n/16==13){
      ans2="D";
    }else if(n/16==14){
      ans2="E";
    }else if(n/16==15){
      ans2="F";
    }else{
      ans2=to_string(n/16);
    }
    n=n%16;
    if(n==10){
      cout<<ans2<<"A"<<endl;
      
    }else if(n==11){
      
      cout<<ans2<<"B"<<endl;
    }else if(n==12){
      cout<<ans2<<"C"<<endl;
      
    }else if(n==13){
      cout<<ans2<<"D"<<endl;
     
    }else if(n==14){
      cout<<ans2<<"E"<<endl;
      
    }else if(n==15){
      cout<<ans2<<"F"<<endl;
      
    }else{
      cout<<ans2<<n<<endl;
    }
    

  }
  return 0;
}