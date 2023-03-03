#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n; 
	long long s=2*n-1;
	for(int i=s,x=1;i>0;i-=2,x+=2){
		for(int j=(i-1)/2;j>0;j--){
			cout<<" ";
		}
		for(int l=1;l<=x;l++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
