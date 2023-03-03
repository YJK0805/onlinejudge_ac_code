#include <bits/stdc++.h>
using namespace std;
int main(){
    long long m,a[3][2],i,j;
    for(i=0;i<3;i++){
    	for(j=0;j<2;j++){
    		cin>>a[i][j];
		}
	}
	for(m=1;m<2000000;m++){
		if(m%a[0][0]==a[0][1]&&m%a[1][0]==a[1][1]&&m%a[2][0]==a[2][1]){
			cout<<m<<endl;
			return 0;
		}
	}
	return 0;
}
