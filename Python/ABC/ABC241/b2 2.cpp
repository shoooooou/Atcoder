/**
*    created: 26.02.2022 21:47:52
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
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    rep(i,n){
        cin>>a[i];
    }
    rep(i,m){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    vector<bool> ind(n,true);
    rep(i,m){
        rep(j,n){
            //cout<<a[j]<<" "<<b[i]<<endl;
            //cout<<ind[j]<<endl;
            if(ind[j]){
                if(b[i]==a[j]){
                    //cout<<"kkk"<<endl;
                    ind[j]=false;
                    break;
                }
                if(j==n-1){
                    //cout<<"jjj"<<endl;
                    cout<<"No"<<endl;
                    return 0;
                }
            }else if(j==n-1){
                cout<<"No"<<endl;
                return 0;
            }
            
        }
        
    }
    cout<<"Yes"<<endl;
    return 0;
}