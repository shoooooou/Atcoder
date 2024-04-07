/**
*    created: 26.02.2022 20:57:18
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
    int cnt=0;
    rep(i,m){
        if(cnt==n){
            cout<<"No"<<endl;
            return 0;
        }
        //cout<<" jhjh"<<a[cnt]<<" "<<b[i]<<endl;
        if(a[cnt]==b[i]){
            cnt++;
        }
        if(a[cnt]>b[i]){
            //cout<<"hhhh"<<endl;
            cout<<"No"<<endl;
            return 0;
        }
        if(a[cnt]<b[i]){
            //cout<<cnt<<endl;
            rep2(j,cnt,n){
                //cout<<a[j]<<" "<<b[i]<<endl;
                if(a[j]==b[i]){
                    cnt=j+1;
                    break;
                }
                //cout<<n<<endl;
                if(j==n-1){
                    //cout<<"aaaaa"<<endl;
                    cout<<"No"<<endl;
                    return 0;
                }

            }
        }
        //cout<<cnt<<endl;
    }
    cout<<"Yes"<<endl;
    return 0;
}