#include <bits/stdc++.h>
using namespace std;
int main(){
    long long r,c,i,j,b=0,d=0;
    while(cin>>r>>c){
    long long q[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>q[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout<<q[j][i]<<" ";
        }
        cout<<endl;
    }
    }
	return 0;
}
