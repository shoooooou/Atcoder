/**
*    created: 19.02.2022 21:23:55
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    // vector<int> tk;
    // rep2(i,a-1,b){
    //     tk.push_back(i+1);
    // }
    // vector<int> sz;
    // rep2(i,c-1,d){
    //     sz.push_back(i+1);
    // }
    bool flag1=false;
    bool flag2=false;
    int N=201;
    bool prime[N];
    
    rep(i,N) prime[i] = 1;
    prime[0] = prime[1] = 0;
     rep(i,N){
         if(prime[i]){
             for(int j = i + i; j < N; j+=i){
                 prime[j] = 0;
             }
         }
     }

    rep2(i,a,b+1){
        //cout<<prime[i]<<" aa";
        if(!prime[i]){
            flag1=1;
            break;
        }
        
    }
    //cout<<endl;
    rep2(i,c,d+1){
        if(!prime[i]){
            flag2=1;
            break;
        }
    }
    rep2(i,a,b+1){
        rep2(j,c,d+1){
            if(prime[i+j]){
                break;
            }
            if(j==d){
                cout<<"Takahashi"<<endl;
                return 0;
            }
        }
    }
    cout<<"Aoki"<<endl;
    return 0;
}