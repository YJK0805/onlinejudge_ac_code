#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,a,b;
	cin>>n;
	long long am[n+1];
	for(int i=0;i<n;i++){
		cin>>a>>b;
		am[a]=a*b;
	}
	long long m,c,d;
	cin>>m;
	for(int j=0;j<m;j++){
		cin>>c>>d;
		if(am[c]>=d){
			cout<<"The shopkeeper is honest.\n";
		}else{
			cout<<d-am[c]<<"\n";
		}
	}
	return 0;
}
