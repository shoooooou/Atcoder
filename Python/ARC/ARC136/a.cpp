/**
*    author:  kkr0226
*    created: 27.02.2022 20:59:52
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
    int n;
    string moji;
    cin>>n>>moji;
    if(n==1){
        cout<<moji<<endl;
        return 0;
    }
    rep(i,moji.length()-1){
        if(moji[i]=='B'&&moji[i+1]=='A'){
            swap(moji[i],moji[i+1]);
        }else if(moji[i]=='B'&&moji[i+1]=='B'){
            moji[i]='A';
            moji.erase(i+1,1);

        }
    }   
    cout<<moji<<endl;
    return 0;
}