#include<bits/stdc++.h>
using namespace std;
int main() {
    const double EPS=1e-7;
    double b[2][2];
    long long i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    if(fabs(b[0][0]*b[1][1]-b[0][1]*b[1][0])<EPS){
        cout<<0<<"\n";
    }else{
        cout<<1<<"\n";
    }
    return 0;
}
