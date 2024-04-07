/**
*    created: 19.02.2022 22:02:26
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
using graph=vector<vector<int>>;
vector<bool> seen;
void dfs(int x,graph &g,vector<int> &max){
    max.push_back(x);
    seen[x]=true;
    //cout<<"tootya"<<endl;
    for(int next:g[x]){
        if(seen[next]==true) continue;
        dfs(next,g,max);
    }
}

int main()
{
    //cout<<endl;
    int n,q;
    cin>>n>>q;
    int num[n];
    rep(i,n){
        cin>>num[i];
        //cout<<num[i]<<endl;
    }
    graph g(n);
    rep(i,n-1){
        int a,b;
        
        cin>>a>>b;
        //cout<<a<<" "<<b<<endl;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int x,y;
    rep(i,q){
        vector<int> max;
        seen.assign(n, false);
        cin>>x>>y;
        
        dfs(x,g,max);
        rep(i,max.size()){
            max[i]=num[max[i]-1];
        }
        sort(max.rbegin(),max.rend());
         
        
        cout<<max[y-1]<<endl;
    }

    return 0;
}