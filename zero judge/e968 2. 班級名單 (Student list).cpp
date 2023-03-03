#include <bits/stdc++.h>
using namespace std;
int main(){
	long long i,n,a[3];
	cin>>n;
	for(i=0;i<3;i++){
		cin>>a[i];
	}
	for(i=n;i>=1;i--){
		if(i!=a[0]&&i!=a[1]&&i!=a[2]){
			cout<<"No. "<<i<<"\n";
		}
	}
	return 0;
}
