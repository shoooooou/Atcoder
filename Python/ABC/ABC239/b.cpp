/**
*    author:  kkr0226
*    created: 19.02.2022 20:58:12
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
    long long x;
    cin>>x;
    long long ans;
    if(x>=0){
        cout<<x/10<<endl;
    }else{
        if(x%10==0){
            cout<<x/10<<endl;
        }else{
            cout<<x/10-1<<endl;
        }
        
    }

    return 0;
}