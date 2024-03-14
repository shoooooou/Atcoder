/**
*    author:  kkr0226
*    created: 19.02.2022 20:58:23
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
const int dx[]={1,1,2,2,-1,-1,-2,-2};
const int dy[]={2,-2,1,-1,2,-2,1,-1};
int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int z1x[8],z1y[8],z2x[8],z2y[8];
    rep(i,8){
        z1x[i]=x1+dx[i];
        z1y[i]=y1+dy[i];
        z2x[i]=x2+dx[i];
        z2y[i]=y2+dy[i];
    }
   
    rep(i,8){
        rep(j,8){
            if(z1x[i]==z2x[j]){
                if(z1y[i]==z2y[j]){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}