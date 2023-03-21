/**
*    created: 06.08.2022 20:56:52
**/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ull = unsigned long long;
using vvi = vector<vector<int> >;
using vi = vector<int>;
using vvl = vector<vector<lli> >;
using vl = vector<lli>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
  lli n,m;
  cin>>n>>m;

  if(n==1){
    rep2(i,1,m+1){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  if(n==2){
    rep2(i,1,m){
      rep2(j,i+1,m+1){
        cout<<i<<" "<<j<<" ";
        cout<<endl;
      }
    }
  }
  if(n==3){
    rep2(a,1,m-1){
      rep2(b,a+1,m){
        rep2(c,b+1,m+1){
          cout<<a<<" "<<b<<" "<<c;
          cout<<endl;
        }
      }
    }
  }
  if(n==4){
    rep2(a,1,m-2){
      rep2(b,a+1,m-1){
        rep2(c,b+1,m){
          rep2(d,c+1,m+1){
            cout<<a<<" "<<b<<" "<<c<<" "<<d;
            cout<<endl;
          }
        }
      }
    }
  }
  if(n==5){
    rep2(a,1,m-3){
      rep2(b,a+1,m-2){
        rep2(c,b+1,m-1){
          rep2(d,c+1,m){
            rep2(e,d+1,m+1){
              cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
              cout<<endl;
            }
          }
        }
      }
    }
  }
  if(n==6){
    rep2(a,1,m-4){
      rep2(b,a+1,m-3){
        rep2(c,b+1,m-2){
          rep2(d,c+1,m-1){
            rep2(e,d+1,m){
              rep2(f,e+1,m+1){
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
                cout<<endl;
              }
            }
          }
        }
      }
    }
  }
  if(n==7){
    rep2(a,1,m-5){
      rep2(b,a+1,m-4){
        rep2(c,b+1,m-3){
          rep2(d,c+1,m-2){
            rep2(e,d+1,m-1){
              rep2(f,e+1,m){
                rep2(g,f+1,m+1){
                  cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g;
                  cout<<endl;

                }
              }
            }
          }
        }
      }
    }
  }
  if(n==8){
    rep2(a,1,m-6){
      rep2(b,a+1,m-5){
        rep2(c,b+1,m-4){
          rep2(d,c+1,m-3){
            rep2(e,d+1,m-2){
              rep2(f,e+1,m-1){
                rep2(g,f+1,m){
                  rep2(h,g+1,m+1){
                  cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h;
                  cout<<endl;
                  }

                }
              }
            }
          }
        }
      }
    }
  }
  if(n==9){
    rep2(a,1,m-7){
      rep2(b,a+1,m-6){
        rep2(c,b+1,m-5){
          rep2(d,c+1,m-4){
            rep2(e,d+1,m-3){
              rep2(f,e+1,m-2){
                rep2(g,f+1,m-1){
                  rep2(h,g+1,m){
                  rep2(i,h+1,m+1){
                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i;
                    cout<<endl;

                  }
                  }

                }
              }
            }
          }
        }
      }
    }
  }
  if(n==10){
    rep2(a,1,m-8){
      rep2(b,a+1,m-7){
        rep2(c,b+1,m-6){
          rep2(d,c+1,m-5){
            rep2(e,d+1,m-4){
              rep2(f,e+1,m-3){
                rep2(g,f+1,m-2){
                  rep2(h,g+1,m-1){
                    rep2(i,h+1,m){
                      rep2(j,i+1,m+1){

                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" ";
                        cout<<endl;
                      }

                    }
                  }

                }
              }
            }
          }
        }
      }
    }
  }
  
  

  return 0;
}