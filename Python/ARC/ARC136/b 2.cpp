/**
*    created: 27.02.2022 21:15:08
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
void swaping(int a[],int i){
    swap(a[i+2],a[i]);
    swap(a[i+1],a[i+2]);    
}

int main()
{
    int num;
    cin>>num;
    int a[num];
    int b[num];
    rep(i,num){
        cin>>a[i];
    }
    rep(i,num){
        cin>>b[i];
    }
    // if(a[0]!=b[0]&&a[1]==b[0]){
    //     swaping(a,0);
    //     swap(a[1],a[2]);
    // }
    int ind;
    rep(i,num){
        // rep(i,num){
        //     cout<<a[i];
        // }
        // cout<<endl;
        if(a[i]!=b[i]){
            if(i==num-1){
                cout<<"No";
                return 0;
            }
            rep2(j,i+1,num){
                if(a[j]==b[i]){
                    if(j==i+1){
                        swaping(a,i);
                        if(a[i]==b[i]){
                            break;
                        }
                        swaping(a,i);
                        break;
                    }
                    int cnt;
                    if(j%2==0){
                        cnt=j/2;
                    }else{
                        cnt=j/2+1;
                        swaping(a,j);
                    }
                    ind=j-2;
                    //cout<<i<<" "<<ind<<" "<<cnt<<endl;
                    for(int k=ind;cnt!=0;cnt--){
                        swaping(a,k);
                        k-=2;
                    }
                    break;
                }   
                if(j==num-1){
                    //cout<<"asfadsf::"<<i<<endl;
                    cout<<"No";
                    return 0;
                } 
            }
        }
    }
    // rep(i,num){
    //     cout<<a[i];
    // }
    //cout<<endl;
    cout<<"Yes";
    return 0;
}