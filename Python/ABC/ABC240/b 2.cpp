/**
*    created: 20.02.2022 20:58:37
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
    set<int> ans;
    int num;
    cin>>num;
    rep(i,num){
        int a;
        cin>>a;
        ans.insert(a);
    }
    cout<<ans.size()<<endl;
    return 0;
}