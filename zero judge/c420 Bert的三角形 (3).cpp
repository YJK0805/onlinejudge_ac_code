#include <bits/stdc++.h>
using namespace std;
int n,n1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	n1=n-1;
	n=n*2-1;
	for(int i=1;i<=n;i+=2){
		for(int j=0;j<n1;j++){
			cout<<"_";
		}
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		for(int j=0;j<n1;j++){
			cout<<"_";
		}
		cout<<"\n";
		n1--;
	}
	return 0;
}
