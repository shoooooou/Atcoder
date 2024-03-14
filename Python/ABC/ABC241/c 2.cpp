/**
*    author:  kkr0226
*    created: 26.02.2022 20:57:44
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int n;

vector<string> field(n);
const int dx[8]={0,0,1,1,1,-1,-1,-1};
const int dy[8]={1,-1,0,1,-1,0,1,-1};
int dfs(int x,int y){
    rep(i,8){
        int xx=x;
        int yy=y;
        int cnt=1;
        int zan;
        if(field[y][x]=='#'){
            zan=0;
        }else{
            zan=1;
        }
        rep(j,5){
            //cout<<yy<<" "<<dy[i]<<endl;
            xx=xx+dx[i];
            yy=yy+dy[i];
            //cout<<yy<<endl;
            if(xx<0||xx>=n||yy<0||yy>=n){
                break;
            }else{
                if(field[yy][xx]=='.'){
                    //cout<<"aiuro"<<endl;
                    zan++;
                    if(zan==3){
                        break;
                    }
                    cnt++;

                }else if(field[yy][xx]=='#'){
                    //cout<<"kakikukeko"<<endl;
                    cnt++;
                }
                if(cnt==6){
                        cout<<"Yes"<<endl;
                        return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    cin>>n;   
    rep(i,n){
        //cout<<"jjj"<<endl;
        string a;
        cin>>a;
        field.push_back(a);
    }
    rep(i,n){
        rep(j,n){
            if(dfs(j,i)==1){
                return 0;
            }
            
        }
    }
    cout<<"No"<<endl;

    return 0;
}