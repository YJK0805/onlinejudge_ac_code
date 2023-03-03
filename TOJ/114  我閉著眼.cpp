#include <iostream>
using namespace std;
int main(){
    long long a[5][6],i,j,t=0;
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&a[i+1][j]==a[i+2][j]){
                t=1;
            }else if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&a[i][j+1]==a[i][j+2]){
                t=1;
            }
        }
    }
    if(t==1){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
	return 0;
}
