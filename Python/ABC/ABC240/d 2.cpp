/**
*    created: 20.02.2022 21:33:58
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
    int num;
    cin>>num;
    vector<int> a(200001,1);
    int cnt=0;
    int bcnt=0;
    int hako[num];
    rep(i,num){
        cin>>hako[i];
    }
    int hako2[num]={1};
    int bef=0;
    rep(i,num){
        cnt++;
        if(hako[i]==bef){
            a[hako[i]]++;
            if(a[hako[i]]==hako[i]){
                cnt-=hako[i];
                bcnt+=hako[i];
                a[hako[i]]=1;
                if(i-bcnt<0){
                    bef=0;
                }else{
                    bef=hako[i-bcnt];
                    a[bef]=hako2[i-bcnt];
                }
            }
        }else{
            if(i==0){
                bef=hako[i];
            }else if(bcnt==0){
                hako2[i-1]=a[hako[i-1]];
                a[hako[i-1]]=1;
                bef=hako[i];
            }else{
                hako2[i-bcnt-a[hako[i]]]=a[hako[i-bcnt-a[hako[i]]]];
                a[hako[i-bcnt-a[hako[i]]]]=1;
                bef=hako[i];
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}