#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long m[n+1][5],i,j;
    double bmr[n];
    for(i=1;i<=n;i++){
        for(j=1;j<=4;j++){
            cin>>m[i][j];
        }
    }
    for(i=1;i<=n;i++){
        if(m[i][1]==1){
            cout<<fixed<<setprecision(2)<<(13.7*m[i][4])+(5.0*m[i][3])-(6.8*m[i][2])+66<<endl;
        }else if(m[i][1]==0){
            cout<<fixed<<setprecision(2)<<(9.6*m[i][4])+(1.8*m[i][3])-(4.7*m[i][2])+655<<endl;
        }
    }
	return 0;
}
