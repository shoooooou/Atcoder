/**
*    created: 29.05.2022 20:57:47
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
lli ketasucal(lli num){
  lli ketasu=0;
  while(num!=0){
    num/=10;
    ketasu++;
  }
  return ketasu;
}
lli oneout(lli x){
  lli ans=1;
  rep(i,x-1){
    ans*=10;
    ans++;
  }
  return ans;
}
bool sosu(lli x){
  bool ans[19]={true};
  ans[0]=false;
  ans[1]=false;
  ans[2]=true;
  ans[3]=true;
  ans[5]=true;
  ans[7]=true;
  ans[11]=true;
  ans[13]=true;
  ans[17]=true;
  ans[4]=false;
  ans[6]=false;
  ans[8]=false;
  ans[9]=false;
  ans[10]=false;
  ans[12]=false;
  ans[14]=false;
  ans[15]=false;
  ans[16]=false;
  ans[18]=false;
  
  
  return ans[x];
}
int main()
{
  lli n;
  cin>>n;
  lli x;
  rep(i,n){
    cin>>x;
    lli ketasu;
    ketasu=ketasucal(x);
    //cout<<ketasu<<endl;
    if(sosu(ketasu)){
      cout<<oneout(ketasu)*(x/oneout(ketasu))<<endl;
    }else{
      bool flag=false;
      rep2(j,2,ketasu){
        if(ketasu%j!=0) continue;
        lli aa[j+1]={0};
        lli num=x;
        rep(k,j){
          lli waru=pow(10,ketasu/j);
          //cout<<j<<"qqq"<<num%waru<<endl;
          aa[k]+=(num%waru);
          num/=waru;
        }
        //cout<<aa[0]<<aa[1]<<endl;
        if(aa[j-1]<=aa[j-2]){
          lli ans=0;
          rep(k,j){
            lli waru=pow(10,ketasu/j);
            ans*=waru;
            ans+=aa[j-1];
          }
          cout<<ans<<endl;
          flag=true;
          break;
        }
      }
      if(flag) continue;
      lli aa[3]={0};
      lli num=x;
      lli keta=ketasu/2;
      lli waru=pow(10,keta);
      aa[0]=num%waru;
      //cout<<"a[0]:"<<aa[0]<<endl;
      num/=waru;
      aa[1]=num;
      //cout<<"a[1]:"<<aa[1]<<endl;
      aa[1]--;
      lli sub=1*aa[1];
      aa[1]*=waru;
      //cout<<aa[1]<<" "<<sub<<endl;
      aa[1]+=sub;
      cout<<aa[1]<<endl;      
    }
  }

  return 0;
}