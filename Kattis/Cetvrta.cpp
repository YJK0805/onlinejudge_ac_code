#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x[3],y[3];
	for(int i=0;i<3;i++){
		cin>>x[i]>>y[i];
	}
	if(x[0]==x[1]){
		cout<<x[2]<<" ";
	}else if(x[0]==x[2]){
		cout<<x[1]<<" ";
	}else{
		cout<<x[0]<<" ";
	}
	if(y[0]==y[1]){
		cout<<y[2]<<"\n";
	}else if(y[0]==y[2]){
		cout<<y[1]<<"\n";
	}else{
		cout<<y[0]<<"\n";
	}
	return 0;
}
