/**
*    author:  kkr0226
*    created: 26.02.2022 20:57:05
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
    int n[10];
    int st=0;
    rep(i,10){
        cin>>n[i];
    }

    int a=n[st];
    a=n[a];
    a=n[a];
    
    cout<<a<<endl;
    
    return 0;
}