/**
*    created: 27.02.2022 22:11:15
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
    int a[3]={1,2,3};
    swap(a[2],a[0]);
    swap(a[1],a[2]);
    cout<<a[0]<<a[1]<<a[2]<<endl;
    return 0;
}