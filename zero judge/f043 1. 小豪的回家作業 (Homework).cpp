#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,r,r2,a;
    cin>>r>>a;
    if(r>a){
        t=r;
        r=a;
        a=t;
    }else if(r==a){
        r=r-3;
    }
    r2=a-r;
    if(r2<r){
        t=r2;
        r2=r;
        r=t;
    }
    cout<<r<<"+"<<r2<<"="<<a<<endl;
	return 0;
}
