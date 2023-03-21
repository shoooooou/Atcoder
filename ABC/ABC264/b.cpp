;/**
*    created: 13.08.2022 20:46:36
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
  lli r,c;
  cin>>r>>c;

  if(c==1||c==15){
    cout<<"black"<<endl;
    return 0;
  }
  if(c==2||c==14){
    if(r==1||r==15){
      cout<<"black"<<endl;
      return 0;
    }else{
      cout<<"white"<<endl;
      return 0;
    }
  }
  if(c==3||c==13){
    if(r==2||r==14){
        cout<<"white"<<endl;
        return 0;
    }else{
        cout<<"black"<<endl;
        return 0;
    }
  }
  if(c==4||c==12){
    if(r==1||r==3||r==15||r==13){
        cout<<"black"<<endl;
        return 0;
    }else{
        cout<<"white"<<endl;
        return 0;
    }
  }
  if(c==5||c==11){
    if(r==2||r==4||r==12||r==14){
        cout<<"white"<<endl;
        return 0;
    }else{
        cout<<"black"<<endl;
        return 0;
    }
  }
  if(c==6||c==10){
    if(r==1||r==3||r==5||r==15||r==13||r==11){
        cout<<"black"<<endl;
        return 0;
    }else{
        cout<<"white"<<endl;
        return 0;
    }
  }
  if(c==7||c==9){
    if(r==2||r==4||r==6||r==14||r==12||r==10){
        cout<<"white"<<endl;
        return 0;
    }else{
        cout<<"black"<<endl;
        return 0;
    }
  }
  if(r%2==0){
        
        cout<<"white"<<endl;
  }else{
        cout<<"black"<<endl;

  }
  return 0;
}