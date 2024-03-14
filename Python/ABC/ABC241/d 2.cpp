/**
*    author:  kkr0226
*    created: 27.02.2022 00:43:46
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
    long long int q,x,k;
    cin>>q;
    multiset<long long int> ms;
    ms.insert(0);
    int que;
    rep(i,q){
        cin>>que;
        if(que==1){
            cin>>x;
            ms.insert(x);
        }

        if(que==2){
            cin>>x>>k;
            auto iter= ms.upper_bound(x);
            --iter;
            while(--k&&iter!=ms.begin()){
                //cout<<i<<"回目 "<<k<<endl;
                --iter;
            }
            if(iter==ms.begin()){
                cout<<-1<<endl;
            }else if(k==0){
                cout<<*iter<<endl;
            }

        }

        if(que==3){
            cin>>x>>k;
            auto iter= ms.lower_bound(x);
            while(--k&&iter!=ms.end()){
                //cout<<i<<"回目 "<<k<<endl;
                ++iter;
            }
            if(iter==ms.end()){
                cout<<-1<<endl;
            }else if(k==0){
                cout<<*iter<<endl;
            }
        }
    }
    return 0;
}